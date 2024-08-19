#include "CloudScriptExecuteEntityCloudScriptRequest.h"

FCloudScriptExecuteEntityCloudScriptRequest::FCloudScriptExecuteEntityCloudScriptRequest() {
    this->CustomTags = NULL;
    this->Entity = NULL;
    this->FunctionParameter = NULL;
    this->GeneratePlayStreamEvent = false;
    this->RevisionSelection = ECloudScriptRevisionOption::pfenum_Live;
    this->SpecificRevision = 0;
}

