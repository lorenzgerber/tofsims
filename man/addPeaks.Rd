% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/AllGenericDefinition.R, R/PeakList.R
\name{addPeaks}
\alias{addPeaks}
\alias{addPeaks,PeakList,missing,numeric-method}
\alias{addPeaks,PeakList,numeric,numeric-method}
\title{generic method to add peaks}
\usage{
addPeaks(object, mzs, width, ...)

\S4method{addPeaks}{PeakList,missing,numeric}(object, mzs, width, ...)

\S4method{addPeaks}{PeakList,numeric,numeric}(object, mzs, width, ...)
}
\arguments{
\item{object}{PeakList object}

\item{mzs}{numeric vector M/z's where peaks shall be added}

\item{width}{fixed value to add (m/z)}

\item{...}{further args}
}
\value{
object updated PeakList object
}
\description{
This method will allow user to plot and add peaks manually.
This method will take all parameters of PeakList plot method.
}
\examples{
library(tofsimsData)
data(tofsimsData)
testPeakList<-PeakList(analysisName = analysisName(testSpectra),
instrument = instrument(testSpectra),
nz = nz(testSpectra),
calibration = calibration(testSpectra),
calibPoints = calibPoints(testSpectra),
mz = mz(testSpectra),
peakIDs = NULL,
peakMzs = NULL)
par(mfcol=c(1,2))
plot(testPeakList, mzRange=c(25,32), type = 'l')
testPeakList<-addPeaks(testPeakList, mzs=26:31, width=0.4)
plot(testPeakList, mzRange=c(25,32), type = 'l')
}
