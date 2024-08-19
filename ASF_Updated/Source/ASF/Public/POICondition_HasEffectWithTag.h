#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumPOIComputationPolicy.h"
#include "POICondition.h"
#include "POICondition_HasEffectWithTag.generated.h"

class UObject;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_HasEffectWithTag : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EffectTag;
    
public:
    UPOICondition_HasEffectWithTag();

protected:
    UFUNCTION(BlueprintCallable)
    bool HasEffectWithTag(UObject* _Object);
    
};

