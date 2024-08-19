#pragma once
#include "CoreMinimal.h"
#include "EffectRewardStruct.h"
#include "GameplayAction.h"
#include "GATagModifier.generated.h"

UCLASS(Blueprintable)
class ASF_API UGATagModifier : public UGameplayAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectRewardStruct> EffectsReward;
    
    UGATagModifier();

};

