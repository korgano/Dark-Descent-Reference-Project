#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POIFilter.h"
#include "POIFilter_CanUseAIAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_CanUseAIAction : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
public:
    UPOIFilter_CanUseAIAction();

};

