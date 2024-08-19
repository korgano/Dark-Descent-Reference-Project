#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumPOIComputationPolicy.h"
#include "POICondition.h"
#include "POICondition_CurrentPhase.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_CurrentPhase : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PhaseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
public:
    UPOICondition_CurrentPhase();

};

