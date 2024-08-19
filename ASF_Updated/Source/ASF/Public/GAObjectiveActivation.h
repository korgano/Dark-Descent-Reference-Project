#pragma once
#include "CoreMinimal.h"
#include "GameplayAction.h"
#include "GAObjectiveActivation.generated.h"

class AObjective;

UCLASS(Blueprintable)
class ASF_API UGAObjectiveActivation : public UGameplayAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> ObjectivesToUnLock;
    
    UGAObjectiveActivation();

};

