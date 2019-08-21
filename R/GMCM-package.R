#' Reproducibility between U133 plus 2 and Exon microarrays
#'
#' This dataset contains a \code{data.frame} of unadjusted P-values for
#' differential expression between germinal center cells and other B-cells
#' @docType data
#' @name u133VsExon
#' @format The format of the \code{data.frame} is:
#'
#'   \code{'data.frame':  19577 obs. of  2 variables:}\cr
#'   \code{$ u133: num  0.17561 0.00178 0.005371 0.000669 0.655261 ...}\cr
#'   \code{$ exon: num  1.07e-01 6.74e-10 1.51e-03 6.76e-05 3.36e-01 ...}\cr
#' @keywords datasets, data
#' @examples
#' data(u133VsExon)
#' plot(u133VsExon, cex = 0.5)
NULL
