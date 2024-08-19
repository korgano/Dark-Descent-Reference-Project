#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_TurnInFormation.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class ASF_API UEnvQueryTest_TurnInFormation : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UEnvQueryTest_TurnInFormation();

};

