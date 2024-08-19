#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POICondition.h"
#include "POICondition_OwnEffectWithTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_OwnEffectWithTag : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EffectTag;
    
public:
    UPOICondition_OwnEffectWithTag();

};

