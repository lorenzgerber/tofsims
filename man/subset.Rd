% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/AllGenericDefinition.R, R/MassImage.R
\name{subset}
\alias{subset}
\alias{subset,MassImage-method}
\title{Generic method for subset}
\usage{
subset(x, ...)

\S4method{subset}{MassImage}(x, ..., xyUpperLeft = NULL, xyLowerRight = NULL)
}
\arguments{
\item{x}{object of class MassImage}

\item{...}{additional args}

\item{xyUpperLeft}{vector of length two with x and y for the upper left 
subset corner}

\item{xyLowerRight}{vector of length two with x and y for the lower right 
subset corner}
}
\value{
object of class MassImage a subest of the in-object

object of class MassImage
}
\description{
Generic method for subset

\code{Subset} method for objects of class \code{MassImage}
}
\examples{
library(tofsimsData)
data(tofsimsData)
subsetTestImage<-subset(testImage, xyUpperLeft = c(1,1), xyLowerRight = c(50,50))
image(subsetTestImage)
}
