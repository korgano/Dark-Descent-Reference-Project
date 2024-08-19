#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TaggedAcknowVariants.h"
#include "PhaseSwitchAcknow.generated.h"

USTRUCT(BlueprintType)
struct FPhaseSwitchAcknow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FromPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ToPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaggedAcknowVariants Assets;
    
    ASF_API FPhaseSwitchAcknow();
};

