#include "EnvQueryTest_TraceFromContext.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_TraceFromContext::UEnvQueryTest_TraceFromContext() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->ContextBegin = UEnvQueryContext_Querier::StaticClass();
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


