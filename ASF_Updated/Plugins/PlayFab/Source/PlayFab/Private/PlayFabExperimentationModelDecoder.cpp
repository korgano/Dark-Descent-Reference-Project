#include "PlayFabExperimentationModelDecoder.h"

UPlayFabExperimentationModelDecoder::UPlayFabExperimentationModelDecoder() {
}

FExperimentationGetTreatmentAssignmentResult UPlayFabExperimentationModelDecoder::decodeGetTreatmentAssignmentResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationGetTreatmentAssignmentResult{};
}

FExperimentationGetLatestScorecardResult UPlayFabExperimentationModelDecoder::decodeGetLatestScorecardResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationGetLatestScorecardResult{};
}

FExperimentationGetExperimentsResult UPlayFabExperimentationModelDecoder::decodeGetExperimentsResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationGetExperimentsResult{};
}

FExperimentationGetExclusionGroupTrafficResult UPlayFabExperimentationModelDecoder::decodeGetExclusionGroupTrafficResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationGetExclusionGroupTrafficResult{};
}

FExperimentationGetExclusionGroupsResult UPlayFabExperimentationModelDecoder::decodeGetExclusionGroupsResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationGetExclusionGroupsResult{};
}

FExperimentationEmptyResponse UPlayFabExperimentationModelDecoder::decodeEmptyResponseResponse(UPlayFabJsonObject* response) {
    return FExperimentationEmptyResponse{};
}

FExperimentationCreateExperimentResult UPlayFabExperimentationModelDecoder::decodeCreateExperimentResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationCreateExperimentResult{};
}

FExperimentationCreateExclusionGroupResult UPlayFabExperimentationModelDecoder::decodeCreateExclusionGroupResultResponse(UPlayFabJsonObject* response) {
    return FExperimentationCreateExclusionGroupResult{};
}


