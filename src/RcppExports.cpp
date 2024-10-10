// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// WritePhylipFile
void WritePhylipFile(const std::vector<int>& xPosition, const std::vector<int>& yPosition, const std::vector<double>& data, const double cutoff, const Rcpp::DataFrame& countTable, const std::string& saveLocation);
RcppExport SEXP _clustur_WritePhylipFile(SEXP xPositionSEXP, SEXP yPositionSEXP, SEXP dataSEXP, SEXP cutoffSEXP, SEXP countTableSEXP, SEXP saveLocationSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type xPosition(xPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type yPosition(yPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type saveLocation(saveLocationSEXP);
    WritePhylipFile(xPosition, yPosition, data, cutoff, countTable, saveLocation);
    return R_NilValue;
END_RCPP
}
// WriteColumnFile
void WriteColumnFile(const std::vector<int>& xPosition, const std::vector<int>& yPosition, const std::vector<double>& data, const double cutoff, const Rcpp::DataFrame& countTable, const std::string& saveLocation);
RcppExport SEXP _clustur_WriteColumnFile(SEXP xPositionSEXP, SEXP yPositionSEXP, SEXP dataSEXP, SEXP cutoffSEXP, SEXP countTableSEXP, SEXP saveLocationSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type xPosition(xPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type yPosition(yPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type saveLocation(saveLocationSEXP);
    WriteColumnFile(xPosition, yPosition, data, cutoff, countTable, saveLocation);
    return R_NilValue;
END_RCPP
}
// MatrixToOpiMatrixCluster
std::vector<Rcpp::DataFrame> MatrixToOpiMatrixCluster(const std::vector<int>& xPosition, const std::vector<int>& yPosition, const std::vector<double>& data, const double cutoff, const Rcpp::DataFrame& countTable, const bool isSim);
RcppExport SEXP _clustur_MatrixToOpiMatrixCluster(SEXP xPositionSEXP, SEXP yPositionSEXP, SEXP dataSEXP, SEXP cutoffSEXP, SEXP countTableSEXP, SEXP isSimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type xPosition(xPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type yPosition(yPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const bool >::type isSim(isSimSEXP);
    rcpp_result_gen = Rcpp::wrap(MatrixToOpiMatrixCluster(xPosition, yPosition, data, cutoff, countTable, isSim));
    return rcpp_result_gen;
END_RCPP
}
// ClassicCluster
std::vector<Rcpp::DataFrame> ClassicCluster(const std::vector<int>& xPosition, const std::vector<int>& yPosition, const std::vector<double>& data, const double cutoff, const std::string& method, const Rcpp::DataFrame& countTable, const bool isSimularity);
RcppExport SEXP _clustur_ClassicCluster(SEXP xPositionSEXP, SEXP yPositionSEXP, SEXP dataSEXP, SEXP cutoffSEXP, SEXP methodSEXP, SEXP countTableSEXP, SEXP isSimularitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type xPosition(xPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type yPosition(yPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const bool >::type isSimularity(isSimularitySEXP);
    rcpp_result_gen = Rcpp::wrap(ClassicCluster(xPosition, yPosition, data, cutoff, method, countTable, isSimularity));
    return rcpp_result_gen;
END_RCPP
}
// ClusterWithPhylip
std::vector<Rcpp::DataFrame> ClusterWithPhylip(const std::string& phylipFilePath, const double cutoff, const std::string& method, const Rcpp::DataFrame& countTable, const bool isSimularity);
RcppExport SEXP _clustur_ClusterWithPhylip(SEXP phylipFilePathSEXP, SEXP cutoffSEXP, SEXP methodSEXP, SEXP countTableSEXP, SEXP isSimularitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type phylipFilePath(phylipFilePathSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const bool >::type isSimularity(isSimularitySEXP);
    rcpp_result_gen = Rcpp::wrap(ClusterWithPhylip(phylipFilePath, cutoff, method, countTable, isSimularity));
    return rcpp_result_gen;
END_RCPP
}
// ClusterWithColumn
std::vector<Rcpp::DataFrame> ClusterWithColumn(const std::string& columnFilePath, const double cutoff, const std::string& method, const Rcpp::DataFrame& countTable, const bool isSimularity);
RcppExport SEXP _clustur_ClusterWithColumn(SEXP columnFilePathSEXP, SEXP cutoffSEXP, SEXP methodSEXP, SEXP countTableSEXP, SEXP isSimularitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type columnFilePath(columnFilePathSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const bool >::type isSimularity(isSimularitySEXP);
    rcpp_result_gen = Rcpp::wrap(ClusterWithColumn(columnFilePath, cutoff, method, countTable, isSimularity));
    return rcpp_result_gen;
END_RCPP
}
// OptiClusterPhylip
std::vector<Rcpp::DataFrame> OptiClusterPhylip(const std::string& filePath, const double cutoff, const Rcpp::DataFrame& countTable, const bool isSim);
RcppExport SEXP _clustur_OptiClusterPhylip(SEXP filePathSEXP, SEXP cutoffSEXP, SEXP countTableSEXP, SEXP isSimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const bool >::type isSim(isSimSEXP);
    rcpp_result_gen = Rcpp::wrap(OptiClusterPhylip(filePath, cutoff, countTable, isSim));
    return rcpp_result_gen;
END_RCPP
}
// OptiClusterColumnDist
std::vector<Rcpp::DataFrame> OptiClusterColumnDist(const std::string& filePath, const double cutoff, const Rcpp::DataFrame& countTable, const bool isSim);
RcppExport SEXP _clustur_OptiClusterColumnDist(SEXP filePathSEXP, SEXP cutoffSEXP, SEXP countTableSEXP, SEXP isSimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const bool >::type isSim(isSimSEXP);
    rcpp_result_gen = Rcpp::wrap(OptiClusterColumnDist(filePath, cutoff, countTable, isSim));
    return rcpp_result_gen;
END_RCPP
}
// DistanceFileToSparseMatrix
std::vector<std::vector<double>> DistanceFileToSparseMatrix(const Rcpp::DataFrame& countTable, const std::string& filePath, const std::string& method);
RcppExport SEXP _clustur_DistanceFileToSparseMatrix(SEXP countTableSEXP, SEXP filePathSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(DistanceFileToSparseMatrix(countTable, filePath, method));
    return rcpp_result_gen;
END_RCPP
}
// ProcessDistanceFiles
SEXP ProcessDistanceFiles(const std::string& filePath, const Rcpp::DataFrame& countTable, double cutoff, bool isSim);
RcppExport SEXP _clustur_ProcessDistanceFiles(SEXP filePathSEXP, SEXP countTableSEXP, SEXP cutoffSEXP, SEXP isSimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type filePath(filePathSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< bool >::type isSim(isSimSEXP);
    rcpp_result_gen = Rcpp::wrap(ProcessDistanceFiles(filePath, countTable, cutoff, isSim));
    return rcpp_result_gen;
END_RCPP
}
// ProcessSparseMatrix
SEXP ProcessSparseMatrix(const std::vector<int>& xPosition, const std::vector<int>& yPosition, const std::vector<double>& data, const Rcpp::DataFrame& countTable, const double cutoff, const bool isSim);
RcppExport SEXP _clustur_ProcessSparseMatrix(SEXP xPositionSEXP, SEXP yPositionSEXP, SEXP dataSEXP, SEXP countTableSEXP, SEXP cutoffSEXP, SEXP isSimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type xPosition(xPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type yPosition(yPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const bool >::type isSim(isSimSEXP);
    rcpp_result_gen = Rcpp::wrap(ProcessSparseMatrix(xPosition, yPosition, data, countTable, cutoff, isSim));
    return rcpp_result_gen;
END_RCPP
}
// GetDistanceDataFrame
Rcpp::DataFrame GetDistanceDataFrame(const SEXP& fileReader);
RcppExport SEXP _clustur_GetDistanceDataFrame(SEXP fileReaderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type fileReader(fileReaderSEXP);
    rcpp_result_gen = Rcpp::wrap(GetDistanceDataFrame(fileReader));
    return rcpp_result_gen;
END_RCPP
}
// GetCountTable
Rcpp::DataFrame GetCountTable(const SEXP& fileReader);
RcppExport SEXP _clustur_GetCountTable(SEXP fileReaderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type fileReader(fileReaderSEXP);
    rcpp_result_gen = Rcpp::wrap(GetCountTable(fileReader));
    return rcpp_result_gen;
END_RCPP
}
// Cluster
std::vector<Rcpp::DataFrame> Cluster(const SEXP& DistanceData, const std::string& method);
RcppExport SEXP _clustur_Cluster(SEXP DistanceDataSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type DistanceData(DistanceDataSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(Cluster(DistanceData, method));
    return rcpp_result_gen;
END_RCPP
}
// OptiCluster
std::vector<Rcpp::DataFrame> OptiCluster(const SEXP& DistanceData);
RcppExport SEXP _clustur_OptiCluster(SEXP DistanceDataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type DistanceData(DistanceDataSEXP);
    rcpp_result_gen = Rcpp::wrap(OptiCluster(DistanceData));
    return rcpp_result_gen;
END_RCPP
}
// CreateDataFrameFromSparse
Rcpp::DataFrame CreateDataFrameFromSparse(const Rcpp::DataFrame& countTable);
RcppExport SEXP _clustur_CreateDataFrameFromSparse(SEXP countTableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type countTable(countTableSEXP);
    rcpp_result_gen = Rcpp::wrap(CreateDataFrameFromSparse(countTable));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_clustur_WritePhylipFile", (DL_FUNC) &_clustur_WritePhylipFile, 6},
    {"_clustur_WriteColumnFile", (DL_FUNC) &_clustur_WriteColumnFile, 6},
    {"_clustur_MatrixToOpiMatrixCluster", (DL_FUNC) &_clustur_MatrixToOpiMatrixCluster, 6},
    {"_clustur_ClassicCluster", (DL_FUNC) &_clustur_ClassicCluster, 7},
    {"_clustur_ClusterWithPhylip", (DL_FUNC) &_clustur_ClusterWithPhylip, 5},
    {"_clustur_ClusterWithColumn", (DL_FUNC) &_clustur_ClusterWithColumn, 5},
    {"_clustur_OptiClusterPhylip", (DL_FUNC) &_clustur_OptiClusterPhylip, 4},
    {"_clustur_OptiClusterColumnDist", (DL_FUNC) &_clustur_OptiClusterColumnDist, 4},
    {"_clustur_DistanceFileToSparseMatrix", (DL_FUNC) &_clustur_DistanceFileToSparseMatrix, 3},
    {"_clustur_ProcessDistanceFiles", (DL_FUNC) &_clustur_ProcessDistanceFiles, 4},
    {"_clustur_ProcessSparseMatrix", (DL_FUNC) &_clustur_ProcessSparseMatrix, 6},
    {"_clustur_GetDistanceDataFrame", (DL_FUNC) &_clustur_GetDistanceDataFrame, 1},
    {"_clustur_GetCountTable", (DL_FUNC) &_clustur_GetCountTable, 1},
    {"_clustur_Cluster", (DL_FUNC) &_clustur_Cluster, 2},
    {"_clustur_OptiCluster", (DL_FUNC) &_clustur_OptiCluster, 1},
    {"_clustur_CreateDataFrameFromSparse", (DL_FUNC) &_clustur_CreateDataFrameFromSparse, 1},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_clustur(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
