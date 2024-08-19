#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumPOIComputationPolicy.h"
#include "POICondition.h"
#include "POICondition_QueryToRespect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_QueryToRespect : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery QueryToRespect;
    
public:
    UPOICondition_QueryToRespect();

};

