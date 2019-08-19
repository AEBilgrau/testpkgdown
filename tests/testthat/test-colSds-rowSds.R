context("Check colSds and rowSds")

x <- matrix(rnorm(50), 10, 5)
dimnames(x) <- list(paste0("r", 1:10), paste0("c", 1:5))


test_that("colSds and rowSds is computed correctly", {
  expect_that(apply(x, 1, sd), equals(testpkgdown:::rowSds(x)))
  expect_that(apply(x, 2, sd), equals(testpkgdown:::colSds(x)))
})

test_that("colSds and rowSds fails as intented", {
  expect_error(testpkgdown:::rowSds(x[, 0]), "col")
  expect_error(testpkgdown:::colSds(x[0, ]), "row")
})

test_that("colSds and rowSds handles zero rows and columns correctly", {
  expect_that(testpkgdown:::rowSds(x[0, ]), equals(apply(x[0,], 1, sd)))
  expect_that(testpkgdown:::colSds(x[, 0]), equals(apply(x[,0], 2, sd)))
})


