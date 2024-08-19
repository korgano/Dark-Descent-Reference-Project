#include "PlayFabCloudScriptModelDecoder.h"

UPlayFabCloudScriptModelDecoder::UPlayFabCloudScriptModelDecoder() {
}

FCloudScriptListQueuedFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListQueuedFunctionsResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptListQueuedFunctionsResult{};
}

FCloudScriptListHttpFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListHttpFunctionsResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptListHttpFunctionsResult{};
}

FCloudScriptListFunctionsResult UPlayFabCloudScriptModelDecoder::decodeListFunctionsResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptListFunctionsResult{};
}

FCloudScriptGetFunctionResult UPlayFabCloudScriptModelDecoder::decodeGetFunctionResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptGetFunctionResult{};
}

FCloudScriptExecuteFunctionResult UPlayFabCloudScriptModelDecoder::decodeExecuteFunctionResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptExecuteFunctionResult{};
}

FCloudScriptExecuteCloudScriptResult UPlayFabCloudScriptModelDecoder::decodeExecuteCloudScriptResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptExecuteCloudScriptResult{};
}

FCloudScriptEmptyResult UPlayFabCloudScriptModelDecoder::decodeEmptyResultResponse(UPlayFabJsonObject* response) {
    return FCloudScriptEmptyResult{};
}


