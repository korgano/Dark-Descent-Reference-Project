#include "EnvQueryGenerator_GridToLocation.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_GridToLocation::UEnvQueryGenerator_GridToLocation() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


