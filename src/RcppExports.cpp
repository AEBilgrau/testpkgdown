// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// colSdsArma
arma::rowvec colSdsArma(const arma::mat& X, const int norm_type);
RcppExport SEXP _testpkgdown_colSdsArma(SEXP XSEXP, SEXP norm_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type norm_type(norm_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(colSdsArma(X, norm_type));
    return rcpp_result_gen;
END_RCPP
}
// rowSdsArma
arma::colvec rowSdsArma(const arma::mat& X, const int norm_type);
RcppExport SEXP _testpkgdown_rowSdsArma(SEXP XSEXP, SEXP norm_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type norm_type(norm_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rowSdsArma(X, norm_type));
    return rcpp_result_gen;
END_RCPP
}
// dmvnormal
arma::mat dmvnormal(arma::mat& x, arma::rowvec mu, arma::mat sigma);
RcppExport SEXP _testpkgdown_dmvnormal(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnormal(x, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// rmvnormal
arma::mat rmvnormal(const int n, arma::rowvec mu, arma::mat sigma);
RcppExport SEXP _testpkgdown_rmvnormal(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnormal(n, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// dgmm_loglik
arma::colvec dgmm_loglik(Rcpp::List mus, Rcpp::List sigmas, Rcpp::NumericVector pie, arma::mat& z, bool marginal_loglik);
RcppExport SEXP _testpkgdown_dgmm_loglik(SEXP musSEXP, SEXP sigmasSEXP, SEXP pieSEXP, SEXP zSEXP, SEXP marginal_loglikSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type mus(musSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type pie(pieSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< bool >::type marginal_loglik(marginal_loglikSEXP);
    rcpp_result_gen = Rcpp::wrap(dgmm_loglik(mus, sigmas, pie, z, marginal_loglik));
    return rcpp_result_gen;
END_RCPP
}
// dgmm_loglik_marginal
arma::mat dgmm_loglik_marginal(Rcpp::List mus, Rcpp::List sigmas, Rcpp::NumericVector pie, arma::mat& z, bool marginal_loglik);
RcppExport SEXP _testpkgdown_dgmm_loglik_marginal(SEXP musSEXP, SEXP sigmasSEXP, SEXP pieSEXP, SEXP zSEXP, SEXP marginal_loglikSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type mus(musSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type pie(pieSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< bool >::type marginal_loglik(marginal_loglikSEXP);
    rcpp_result_gen = Rcpp::wrap(dgmm_loglik_marginal(mus, sigmas, pie, z, marginal_loglik));
    return rcpp_result_gen;
END_RCPP
}
// approx_pnorm
arma::colvec approx_pnorm(arma::colvec& z, const double mu, const double sd);
RcppExport SEXP _testpkgdown_approx_pnorm(SEXP zSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(approx_pnorm(z, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// pgmm_marginal
arma::mat pgmm_marginal(arma::mat& z, Rcpp::List mus, Rcpp::List sigmas, Rcpp::NumericVector pie);
RcppExport SEXP _testpkgdown_pgmm_marginal(SEXP zSEXP, SEXP musSEXP, SEXP sigmasSEXP, SEXP pieSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mus(musSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type pie(pieSEXP);
    rcpp_result_gen = Rcpp::wrap(pgmm_marginal(z, mus, sigmas, pie));
    return rcpp_result_gen;
END_RCPP
}
// EStepRcpp
arma::mat EStepRcpp(arma::mat& z, Rcpp::List mus, Rcpp::List sigmas, Rcpp::NumericVector pie);
RcppExport SEXP _testpkgdown_EStepRcpp(SEXP zSEXP, SEXP musSEXP, SEXP sigmasSEXP, SEXP pieSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mus(musSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type pie(pieSEXP);
    rcpp_result_gen = Rcpp::wrap(EStepRcpp(z, mus, sigmas, pie));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_testpkgdown_colSdsArma", (DL_FUNC) &_testpkgdown_colSdsArma, 2},
    {"_testpkgdown_rowSdsArma", (DL_FUNC) &_testpkgdown_rowSdsArma, 2},
    {"_testpkgdown_dmvnormal", (DL_FUNC) &_testpkgdown_dmvnormal, 3},
    {"_testpkgdown_rmvnormal", (DL_FUNC) &_testpkgdown_rmvnormal, 3},
    {"_testpkgdown_dgmm_loglik", (DL_FUNC) &_testpkgdown_dgmm_loglik, 5},
    {"_testpkgdown_dgmm_loglik_marginal", (DL_FUNC) &_testpkgdown_dgmm_loglik_marginal, 5},
    {"_testpkgdown_approx_pnorm", (DL_FUNC) &_testpkgdown_approx_pnorm, 3},
    {"_testpkgdown_pgmm_marginal", (DL_FUNC) &_testpkgdown_pgmm_marginal, 4},
    {"_testpkgdown_EStepRcpp", (DL_FUNC) &_testpkgdown_EStepRcpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_testpkgdown(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}