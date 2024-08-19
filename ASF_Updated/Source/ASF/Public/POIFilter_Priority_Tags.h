#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POIFilter.h"
#include "POIFilter_Priority_Tags.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_Priority_Tags : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> TagPriorityWeight;
    
public:
    UPOIFilter_Priority_Tags();

};

