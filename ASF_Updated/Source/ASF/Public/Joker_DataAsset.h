#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Joker_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UJoker_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHealAmountPerAlly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenHeal;
    
    UJoker_DataAsset();

};

