#pragma once
#include "CoreMinimal.h"
#include "EnumPOIComputationPolicy.h"
#include "POIFilter.h"
#include "POIFilter_IsAttackingPlayer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_IsAttackingPlayer : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
public:
    UPOIFilter_IsAttackingPlayer();

};

