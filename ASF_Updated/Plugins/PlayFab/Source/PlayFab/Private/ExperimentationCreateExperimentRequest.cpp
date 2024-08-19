#include "ExperimentationCreateExperimentRequest.h"

FExperimentationCreateExperimentRequest::FExperimentationCreateExperimentRequest() {
    this->CustomTags = NULL;
    this->ExclusionGroupTrafficAllocation = 0;
    this->ExperimentType = EExperimentType::pfenum_Active;
}

