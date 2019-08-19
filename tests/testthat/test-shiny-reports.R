context("Test that shiny reports are working")

test_that("shiny reports can be expanded and rendered", {
  skip_on_cran()

  # Expect no errors (i.e. fail to provide errors)
  expect_error(testpkgdown:::run_meta_report(), NA)
  expect_error(testpkgdown:::run_full_report(), NA)
})



