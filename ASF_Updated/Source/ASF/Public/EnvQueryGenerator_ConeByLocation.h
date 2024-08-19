#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h"
#include "EnvQueryGenerator_ConeByLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UEnvQueryGenerator_ConeByLocation : public UEnvQueryGenerator_Cone {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_ConeByLocation();

};

