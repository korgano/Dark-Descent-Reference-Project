#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POICondition.h"
#include "POICondition_CanUseAIAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_CanUseAIAction : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
public:
    UPOICondition_CanUseAIAction();

};

