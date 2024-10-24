#' Read Dist Description
#'
#' Detailed description of the function.
#'
#' @export
#' @param distance_file Either a phylip or column
#' distance file, or a sparse matrix.
#' @param count_table A table of names and the given abundance per group.
#' @param cutoff The value you wish to use as a cutoff when clustering.
#' @param is_simularity_matrix are you using a
#' simularity matrix or distance matrix?
#' @return A distance `externalptr` object that contains all your
#' distance information.
#'
#' @examples
#'
#'  i_values <- as.integer(1:100)
#'  j_values <- as.integer(sample(1:100, 100, TRUE))
#'  x_values <- as.numeric(runif(100, 0, 1))
#'  s_matrix <- create_sparse_matrix(i_values, j_values, x_values)
#'
#'  sparse_count <- data.frame(
#'                  Representative_Sequence = 1:100,
#'                  total = rep(1, times = 100))
#'
#'  column_path <- example_path("amazon_column.dist")
#'  phylip_path <- example_path("amazon_phylip.dist")
#'  count_table <- read_count(example_path("amazon.count_table"))
#'
#'  data_column <- read_dist(column_path, count_table, 0.2, FALSE)
#'  data_phylip <- read_dist(phylip_path, count_table, 0.2, FALSE)
#'  data_sparse <- read_dist(s_matrix, sparse_count, 0.2, FALSE)
#'
#'
read_dist <- function(distance_file, count_table,
                      cutoff, is_simularity_matrix = FALSE) {
  count_table <- validate_count_table(count_table)

  if ("character" %in% class(distance_file)) {
    if (!file.exists(distance_file)) {
      stop("Invalid file path: please enter a new file path.")
    }
    return(ProcessDistanceFiles(distance_file,
                                count_table, cutoff, is_simularity_matrix))
  }
  # Its a sparse matrix not a path

  return(ProcessSparseMatrix(distance_file@i, distance_file@j, distance_file@x,
                             count_table, cutoff, is_simularity_matrix))
}


#' Cluster Description
#'
#' Detailed description of the function.
#'
#' @export
#' @param distance_object The distance object that
#'  was created using the `read_dist()` function.
#' @param method The type of cluster you wish to conduct;
#'  opti, furthest, nearest, average, or weighted.
#' @param random_seed the random seed you wish to use, defaulted at 123.
#' @return A list of `data.frames` that contain abundance,
#'  and clustering results. If you used "opti", it will also
#'  return clustering metrics.
#'
#' @examples
#'
#'  cutoff <- 0.2
#'  count_table <- read_count(example_path("amazon.count_table"))
#'  distance_data <- read_dist(example_path("amazon_column.dist"),
#'                             count_table, cutoff, FALSE)
#'
#'  cluster_results <- cluster(distance_data, method = "opti")
#'  cluster_results <- cluster(distance_data, method = "furthest")
#'  cluster_results <- cluster(distance_data, method = "nearest")
#'  cluster_results <- cluster(distance_data, method = "average")
#'  cluster_results <- cluster(distance_data, method = "weighted")
#'
#'
cluster <- function(distance_object, method = "opti", random_seed = 123) {
  if (!("externalptr" %in% class(distance_object))) {
    stop("`distance_object` must be generated using the `read_dist` function")
  }
  set.seed(random_seed)
  cluster_dfs <- c()
  if (method != "opti") {
    cluster_dfs <- Cluster(distance_object, method)
  } else {
    cluster_dfs <- OptiCluster(distance_object)
  }

  # Order by OTU size
  cluster_dfs[[2]]$comma_count <- sapply(cluster_dfs[[2]]$bins, function(x) {
    ls <- gregexpr(",", x, fixed = TRUE)[[1]]
    if (ls[[1]] == -1) {
      return(0)
    } else {
      return(length(ls))
    }
  })
  cluster_dfs[[2]] <- cluster_dfs[[2]][order(cluster_dfs[[2]]$comma_count,
                                             decreasing = TRUE), ]
  cluster_dfs[[2]] <- cluster_dfs[[2]][, 1:3]


  # Return
  if (method != "opti") {
    return(list(
      abundance = cluster_dfs[[1]],
      cluster = cluster_dfs[[2]]
    ))
  }
  return(list(
    abundance = cluster_dfs[[1]],
    cluster = cluster_dfs[[2]],
    cluster_metrics = cluster_dfs[[3]],
    other_cluster_metrics = cluster_dfs[[4]]
  ))

}

#' Validate Count Table
#'
#' Detailed description of the function.
#'
#' @export
#' @param count_table_df The count table `data.frame` object.
#' @return A validated count table `data.frame`
#' @description
#' If the count table is already valid nothing will change,
#' otherwise it will add a new group to the count table file.
#'
#' @examples
#'  count_table <- read.delim(example_path("amazon.count_table"))
#'  count_table_valid <- validate_count_table(count_table)
#'
validate_count_table <- function(count_table_df) {
  if (ncol(count_table_df) > 2) {
    return(count_table_df)
  }
  totals <- count_table_df$total
  count_table_df <- cbind(count_table_df, totals)
  names(count_table_df)[3] <- "no_group"
  count_table_df[[1]] <- as.character(count_table_df[[1]])
  return(count_table_df)
}

#' Example Path
#'
#' @export
#' @description
#'  This function was created as a helper function to generate file paths to our
#'  internal data. You should use this function if you
#'  want to follow along with the example, or intereact with the data
#' @param file The file name of the data
#' @examples
#' # This will return the path to our example file
#' example_path("amazon_phylip.dist")
#'
#' @return the path to the file as a `chr`.
example_path <- function(file = NULL) {
  path <- ""
  if (is.null(file)) {
    path <- dir(system.file("extdata", package = "clustur"))
  } else {
    path <- system.file("extdata", file, package = "clustur", mustWork = TRUE)
  }
  return(path)
}


#' Read Count
#'
#' @export
#' @description
#' This function will read and return your count table. It can take in
#' sparse and normal count tables.
#' @param count_table_path The file path of your count table.
#' @examples
#'
#' count_table <- read_count(example_path("amazon.count_table"))
#'
#' @return a count table `data.frame`.
read_count <- function(count_table_path) {
  # We will have to determine if its a sparse or not
  # Check if the first value of test_read had a comment
  test_read <- read.delim(count_table_path, sep = "\t", header = FALSE)
  if (grepl("#", test_read[1, 1], fixed = TRUE)) {
    count_table_sparse <- read.delim(count_table_path, sep = "\t", skip = 2)
    count_table_sparse <- lapply(count_table_sparse, as.character)
    return(validate_count_table(CreateDataFrameFromSparse(count_table_sparse)))
  }
  return(validate_count_table(read.delim(count_table_path, sep = "\t")))
}

#' Create Sparse Matrix
#'
#' @export
#' @description
#' Given a list of i indexs, j indexes, and distances values,
#' we can create a sparse distance matrix for you. Each vector
#' must have the same size.
#' @param i_index A list of i indexes, must be numeric
#' @param j_index A list of j indexes, must be numeric
#' @param distances A list of the distance at the i and j index
#' @examples
#'
#' # This will return the path to our example file
#'  i_values <- as.integer(1:100)
#'  j_values <- as.integer(sample(1:100, 100, TRUE))
#'  x_values <- as.numeric(runif(100, 0, 1))
#'  s_matrix <- create_sparse_matrix(i_values, j_values, x_values)
#'

#' @return a `dgTMatrix` from the `Matrix` library.
create_sparse_matrix <- function(i_index, j_index, distances) {
  size <- max(i_index, j_index)
  return(spMatrix(size, size, i_index, j_index, distances))
}
