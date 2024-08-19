#include "PlayFabDataModelDecoder.h"

UPlayFabDataModelDecoder::UPlayFabDataModelDecoder() {
}

FDataSetObjectsResponse UPlayFabDataModelDecoder::decodeSetObjectsResponseResponse(UPlayFabJsonObject* response) {
    return FDataSetObjectsResponse{};
}

FDataInitiateFileUploadsResponse UPlayFabDataModelDecoder::decodeInitiateFileUploadsResponseResponse(UPlayFabJsonObject* response) {
    return FDataInitiateFileUploadsResponse{};
}

FDataGetObjectsResponse UPlayFabDataModelDecoder::decodeGetObjectsResponseResponse(UPlayFabJsonObject* response) {
    return FDataGetObjectsResponse{};
}

FDataGetFilesResponse UPlayFabDataModelDecoder::decodeGetFilesResponseResponse(UPlayFabJsonObject* response) {
    return FDataGetFilesResponse{};
}

FDataFinalizeFileUploadsResponse UPlayFabDataModelDecoder::decodeFinalizeFileUploadsResponseResponse(UPlayFabJsonObject* response) {
    return FDataFinalizeFileUploadsResponse{};
}

FDataDeleteFilesResponse UPlayFabDataModelDecoder::decodeDeleteFilesResponseResponse(UPlayFabJsonObject* response) {
    return FDataDeleteFilesResponse{};
}

FDataAbortFileUploadsResponse UPlayFabDataModelDecoder::decodeAbortFileUploadsResponseResponse(UPlayFabJsonObject* response) {
    return FDataAbortFileUploadsResponse{};
}


