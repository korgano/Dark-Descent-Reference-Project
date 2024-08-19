#pragma once
#include "CoreMinimal.h"
#include "EnumPOIComputationPolicy.h"
#include "EnumSquadStatus.h"
#include "POICondition.h"
#include "POICondition_SquadStatus.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_SquadStatus : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumSquadStatus SquadStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
public:
    UPOICondition_SquadStatus();

};

