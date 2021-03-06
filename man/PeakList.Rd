% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/AllClassDefinition.R, R/PeakList.R
\name{PeakList}
\alias{PeakList}
\title{Class PeakList}
\usage{
PeakList(
  analysisName = NULL,
  instrument = NULL,
  nz = NULL,
  calibration = NULL,
  calibPoints = NULL,
  mz = NULL,
  peakIDs = NULL,
  peakMzs = NULL,
  ...
)

PeakList(
  analysisName = NULL,
  instrument = NULL,
  nz = NULL,
  calibration = NULL,
  calibPoints = NULL,
  mz = NULL,
  peakIDs = NULL,
  peakMzs = NULL,
  ...
)
}
\arguments{
\item{analysisName}{character vector with the import filename}

\item{instrument}{character vector type of instrument used in the experiment}

\item{nz}{matrix numeric containing ion counts, rows are image points, column toftimes/mass to charge ratios}

\item{calibration}{data frame for numerics slope and intercept of the mass calibration}

\item{calibPoints}{data frame for time of flight to maass to charge calibration}

\item{mz}{vector same length as columns in \code{nz} for mass to charge values}

\item{peakIDs}{matrix integer ID for peaks}

\item{peakMzs}{matrix with mass to charge values for lower, middle and upper peak values}

\item{...}{additional args}
}
\value{
object of class PeakList
}
\description{
Class PeakList is an extension of TIC class that can hold information about 
peaks.
 
Class \code{PeakList} inherits from the classes \code{MassAnalysis}, 
\code{MassSpectra}
and \code{TIC}.

\code{PeakList} class constructor
}
\details{
The \code{PeakList} class constructor is used to construct a new
PeakList object. Input are currently all needed variables.
}
\section{Slots}{

\describe{
\item{\code{peakIDs}}{matrix integer ID for peaks}

\item{\code{peakMzs}}{matrix with mass to charge values for lower, middle and upper 
peak values}
}}

\examples{
# The typical way to obtain a PeakList object is by
# applying some peak picking method to a MassSpectra
# below an example using the 'unitMassPeaks' method
library(tofsimsData)
data(tofsimsData)
testSpectra<-calibPointNew(testSpectra, mz = 15, value = 15.01551)
testSpectra<-calibPointNew(testSpectra, mz = 181, value = 181.0228)
testSpectra<-recalibrate(testSpectra)
testSpectra<-unitMassPeaks(testSpectra, mzRange = c(1,200), widthAt = c(15, 181), 
factor = c(0.4, 0.6), lower = c(14.97, 15.05), upper = c(180.84, 181.43))
show(testSpectra)
}
\author{
Lorenz Gerber <lorenz.gerber@slu.se>

Lorenz Gerber <lorenz.gerber@slu.se>
}
