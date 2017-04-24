// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// import
List import(CharacterVector rFilename, CharacterVector fType, int imageSize, float upperMass);
RcppExport SEXP tofsims_import(SEXP rFilenameSEXP, SEXP fTypeSEXP, SEXP imageSizeSEXP, SEXP upperMassSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type rFilename(rFilenameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type fType(fTypeSEXP);
    Rcpp::traits::input_parameter< int >::type imageSize(imageSizeSEXP);
    Rcpp::traits::input_parameter< float >::type upperMass(upperMassSEXP);
    rcpp_result_gen = Rcpp::wrap(import(rFilename, fType, imageSize, upperMass));
    return rcpp_result_gen;
END_RCPP
}
// calibrate_ITZIP
List calibrate_ITZIP(List uncalibrate, float upperMass);
RcppExport SEXP tofsims_calibrate_ITZIP(SEXP uncalibrateSEXP, SEXP upperMassSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type uncalibrate(uncalibrateSEXP);
    Rcpp::traits::input_parameter< float >::type upperMass(upperMassSEXP);
    rcpp_result_gen = Rcpp::wrap(calibrate_ITZIP(uncalibrate, upperMass));
    return rcpp_result_gen;
END_RCPP
}
// read_BIF
List read_BIF(std::string file, std::string instrument);
RcppExport SEXP tofsims_read_BIF(SEXP fileSEXP, SEXP instrumentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type instrument(instrumentSEXP);
    rcpp_result_gen = Rcpp::wrap(read_BIF(file, instrument));
    return rcpp_result_gen;
END_RCPP
}
// EigenDecompose
List EigenDecompose(NumericMatrix A, NumericMatrix B, int startIndex, int endIndex);
RcppExport SEXP tofsims_EigenDecompose(SEXP ASEXP, SEXP BSEXP, SEXP startIndexSEXP, SEXP endIndexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type startIndex(startIndexSEXP);
    Rcpp::traits::input_parameter< int >::type endIndex(endIndexSEXP);
    rcpp_result_gen = Rcpp::wrap(EigenDecompose(A, B, startIndex, endIndex));
    return rcpp_result_gen;
END_RCPP
}
// nnMean
NumericVector nnMean(NumericVector y, int nrows, int ncols);
RcppExport SEXP tofsims_nnMean(SEXP ySEXP, SEXP nrowsSEXP, SEXP ncolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type ncols(ncolsSEXP);
    rcpp_result_gen = Rcpp::wrap(nnMean(y, nrows, ncols));
    return rcpp_result_gen;
END_RCPP
}
// readRawPhiC
NumericMatrix readRawPhiC(CharacterVector rFilename, float rSlope, float rIntercept, float rImagePixels);
RcppExport SEXP tofsims_readRawPhiC(SEXP rFilenameSEXP, SEXP rSlopeSEXP, SEXP rInterceptSEXP, SEXP rImagePixelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type rFilename(rFilenameSEXP);
    Rcpp::traits::input_parameter< float >::type rSlope(rSlopeSEXP);
    Rcpp::traits::input_parameter< float >::type rIntercept(rInterceptSEXP);
    Rcpp::traits::input_parameter< float >::type rImagePixels(rImagePixelsSEXP);
    rcpp_result_gen = Rcpp::wrap(readRawPhiC(rFilename, rSlope, rIntercept, rImagePixels));
    return rcpp_result_gen;
END_RCPP
}
// cTable
List cTable(NumericVector vect);
RcppExport SEXP tofsims_cTable(SEXP vectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vect(vectSEXP);
    rcpp_result_gen = Rcpp::wrap(cTable(vect));
    return rcpp_result_gen;
END_RCPP
}
// cParIndicesSearch
IntegerVector cParIndicesSearch(NumericVector rawVector, NumericVector mzs, IntegerVector mzsOrder, std::string startOrEnd);
RcppExport SEXP tofsims_cParIndicesSearch(SEXP rawVectorSEXP, SEXP mzsSEXP, SEXP mzsOrderSEXP, SEXP startOrEndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type rawVector(rawVectorSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mzs(mzsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mzsOrder(mzsOrderSEXP);
    Rcpp::traits::input_parameter< std::string >::type startOrEnd(startOrEndSEXP);
    rcpp_result_gen = Rcpp::wrap(cParIndicesSearch(rawVector, mzs, mzsOrder, startOrEnd));
    return rcpp_result_gen;
END_RCPP
}