#include "ClientExecuteCloudScriptRequest.h"

FClientExecuteCloudScriptRequest::FClientExecuteCloudScriptRequest() {
    this->CustomTags = NULL;
    this->FunctionParameter = NULL;
    this->GeneratePlayStreamEvent = false;
    this->RevisionSelection = ECloudScriptRevisionOption::pfenum_Live;
    this->SpecificRevision = 0;
}

