test_that("get_count_table returns the count table", {
  cutoff <- 0.2

  # With Normal Count Table
  count_table <- read_count(test_path("extdata", "amazon.count_table"))
  distance_data <- read_dist(test_path("extdata", "amazon_column.dist"),
                             count_table, cutoff, FALSE)
  expect_true(all(get_count_table(distance_data) == count_table))

  # With Sparse Count Table
  count_table_sparse <- read_count(test_path("extdata",
                                             "amazon_sparse.count_table"))
  distance_data <- read_dist(test_path("extdata", "amazon_column.dist"),
                             count_table_sparse, cutoff, FALSE)
  expect_true(all(get_count_table(distance_data) == count_table_sparse))
})

test_that("get_distance_data_frame returns a dataframe of the distances", {
  cutoff <- 0.2
  count_table <- read_count(test_path("extdata", "amazon.count_table"))
  distance_data <- read_dist(test_path("extdata", "amazon_column.dist"),
                             count_table, cutoff, FALSE)
  distances <- get_distance_data_frame(distance_data)
  expect_true("data.frame" %in% class(distances))
  expect_true(nrow(distances) == 9604)
  expect_true(ncol(distances) == 3)
})
