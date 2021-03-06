% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/AllGenericDefinition.R, R/MassSpectra.R
\name{scale}
\alias{scale}
\alias{scale,MassSpectra-method}
\title{generic for scale}
\usage{
scale(x, center = TRUE, scale = TRUE)

\S4method{scale}{MassSpectra}(x, center = TRUE, scale = TRUE)
}
\arguments{
\item{x}{object object of class MassSpectra}

\item{center}{boolean should data be centered}

\item{scale}{boolean should data be scaled}
}
\value{
object of class MassSpectra with scaled mass spectra

object of class MassSpectra
}
\description{
scale
autoscaling method for MassSpectra object. Scaling
is along the mass channels. Therefore more than one
spectra is needed for scaling.
}
\examples{
## autoscaling of dummy image data
testImage<-MassImage('dummy')
par(mfcol=c(2,2))
plot(testImage,type='l')
image(testImage)
testImage <- scale(testImage)
plot(testImage,type='l')
image(testImage)
\dontrun{
## autoscaling of real spectral data
library(tofsimsData)
data(tofsimsData)
par(mfcol=c(2,2))
plot(testImage,type='l')
image(testImage)
testImage <- scale(testImage)
plot(testImage,type='l')
image(testImage)}
}
