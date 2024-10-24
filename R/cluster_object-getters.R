
#' Get Cutoff
#'
#' @export
#' @description
#' GetCutoff returns the cutoff of the cluster object from
#' the `cluster()` function.
#' @param cluster_data The output from the `cluster()` function.
#' @examples
#' cutoff <- 0.2
#' count_table <- read_count(example_path("amazon.count_table"))
#' distance_data <- read_dist(example_path("amazon_column.dist"),
#'                            count_table, cutoff, FALSE)
#' df_clusters <- cluster(distance_data, method = "opti")
#' cutoff <- get_cutoff(df_clusters)
#'
#' @return the cutoff value as a `dbl`
get_cutoff <- function(cluster_data) {
  return(as.numeric(cluster_data$cluster$label[[1]]))
}


#' Get Clusters
#'
#' @export
#' @description
#' GetClusters returns a `data.frame` of the generated
#' clusters from the `cluster()` function.
#' @param cluster_data The output from the `cluster()` function.
#' @examples
#' cutoff <- 0.2
#' count_table <- read_count(example_path("amazon.count_table"))
#' distance_data <- read_dist(example_path("amazon_column.dist"),
#'                            count_table, cutoff, FALSE)
#' df_clusters <- cluster(distance_data, method = "opti")
#' clusters <- get_clusters(df_clusters)
#'
#' @return the created cluster `data.frame`.
get_clusters <- function(cluster_data) {
  return(cluster_data$cluster)
}


#' Get Shared
#'
#' @export
#' @description
#' GetShared retuns the generated abundance `data.frame`
#' from the `cluster()` function
#' @param cluster_data The output from the `cluster()` function.
#' @examples
#' cutoff <- 0.2
#' count_table <- read_count(example_path("amazon.count_table"))
#' distance_data <- read_dist(example_path("amazon_column.dist"),
#'                            count_table, cutoff, FALSE)
#' df_clusters <- cluster(distance_data, method = "opti")
#' shared <- get_shared(df_clusters)
#'
#' @return a shared data.frame
get_shared <- function(cluster_data) {
  return(cluster_data$abundance)
}


#' Get Metrics
#'
#' @export
#' @description
#' GetMetrics returns the generated metrics `data.frame` from the
#' `cluster()` function.
#' @param cluster_data The output from the `cluster()` function.
#' @examples
#' cutoff <- 0.2
#' count_table <- read_count(example_path("amazon.count_table"))
#' distance_data <- read_dist(example_path("amazon_column.dist"),
#'                            count_table, cutoff, FALSE)
#' df_clusters <- cluster(distance_data, method = "opti")
#' list_of_metrics <- get_metrics(df_clusters)
#'
#' @return a list of metric data.frames
get_metrics <- function(cluster_data) {
  if (is.null(cluster_data$cluster_metrics)) {
    stop("Can only use the get_metrics function when an 
    object is clustered using the opticluster method")
  }
  return(list(metrics = cluster_data$cluster_metrics,
              other_metrics = cluster_data$other_cluster_metrics))
}
