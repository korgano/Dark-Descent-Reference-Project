#include "ServerExecuteCloudScriptServerRequest.h"

FServerExecuteCloudScriptServerRequest::FServerExecuteCloudScriptServerRequest() {
    this->CustomTags = NULL;
    this->FunctionParameter = NULL;
    this->GeneratePlayStreamEvent = false;
    this->RevisionSelection = ECloudScriptRevisionOption::pfenum_Live;
    this->SpecificRevision = 0;
}

