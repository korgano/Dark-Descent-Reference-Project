#include "CloudScriptExecuteFunctionResult.h"

FCloudScriptExecuteFunctionResult::FCloudScriptExecuteFunctionResult() {
    this->Error = NULL;
    this->ExecutionTimeMilliseconds = 0;
    this->FunctionResult = NULL;
    this->FunctionResultTooLarge = false;
}

