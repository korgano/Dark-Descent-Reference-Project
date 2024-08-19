#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POIFilter.h"
#include "POIFilter_IsCharaInPerception.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_IsCharaInPerception : public UPOIFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PerceptionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InverseCondition;
    
    UPOIFilter_IsCharaInPerception();

};

