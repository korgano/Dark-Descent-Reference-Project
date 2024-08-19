#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OtagoEventOptionOutcome.h"
#include "OtagoEventValue.h"
#include "OtagoEventOutcome.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FOtagoEventOutcome {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOtagoEventValue> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOtagoEventValue> EffectOutcomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOtagoEventOptionOutcome> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PickedOptionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> FormattedTargets;
    
    FOtagoEventOutcome();
};

