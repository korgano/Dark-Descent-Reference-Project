#include "ClientExecuteCloudScriptResult.h"

FClientExecuteCloudScriptResult::FClientExecuteCloudScriptResult() {
    this->APIRequestsIssued = 0;
    this->Error = NULL;
    this->ExecutionTimeSeconds = 0;
    this->FunctionResult = NULL;
    this->FunctionResultTooLarge = false;
    this->HttpRequestsIssued = 0;
    this->LogsTooLarge = false;
    this->MemoryConsumedBytes = 0;
    this->ProcessorTimeSeconds = 0;
    this->Revision = 0;
}

