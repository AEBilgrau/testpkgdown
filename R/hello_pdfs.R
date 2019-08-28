#' Hello PDFs
#'
#' @return nothing
#' @export
#' @importFrom stats rnorm
#' @examples
#' plot(hello_pdfs())
#' dev.off()
#' plot(hello_pdfs())
hello_pdfs <- function() {
  rnorm(10)
}
