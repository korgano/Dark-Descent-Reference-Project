#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TriggerInfo.h"
#include "TutorialStepTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UTutorialStepTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TutorialTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 stepId;
    
    UTutorialStepTriggerInfo();

};

