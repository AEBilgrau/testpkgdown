context("Check EStep")

set.seed(123021930)
for (n in c(100, 200, 300, 400)) {
  for (m in 1:4) {

    sim <- testpkgdown:::SimulateGMMData(n = n, m = m)
    init.theta <- testpkgdown:::rtheta(m = m)  # Generate starting parameters
    es <- testpkgdown:::EStep(sim$z, init.theta)

    test_that("EStep returns proper formatted output", {
      expect_true(is.matrix(es))
      expect_true(is.numeric(es))
      expect_that(nrow(es), equals(n))
      expect_that(ncol(es), equals(m))
    })
  }
}

# Test more parameters!
