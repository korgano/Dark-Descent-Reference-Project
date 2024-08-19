#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TriggerInfo.h"
#include "FeatureUnlockTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UFeatureUnlockTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FeatureTag;
    
    UFeatureUnlockTriggerInfo();

    UFUNCTION(BlueprintCallable)
    void OnFeatureUnlock(FGameplayTag Tag);
    
};

