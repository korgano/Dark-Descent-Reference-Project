#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ImpactReaction.generated.h"

USTRUCT(BlueprintType)
struct FImpactReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReactionTag;
    
    ASF_API FImpactReaction();
};

