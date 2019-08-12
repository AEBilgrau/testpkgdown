#' Hello PDFs
#'
#' @return nothing
#' @export
#' @importFrom stats rnorm
#' @examples
#' par(mfrow = c(1, 2))
#' plot(hello_pdfs())
#' plot(hello_pdfs())
hello_pdfs <- function() {
  rnorm(10)
}
