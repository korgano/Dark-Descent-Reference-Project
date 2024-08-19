#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POICondition.h"
#include "POICondition_RequesterTaggedBy.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_RequesterTaggedBy : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
public:
    UPOICondition_RequesterTaggedBy();

};

