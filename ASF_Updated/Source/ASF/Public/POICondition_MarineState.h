#pragma once
#include "CoreMinimal.h"
#include "EnumAiEnemyMarineState.h"
#include "EnumPOIComputationPolicy.h"
#include "POICondition.h"
#include "POICondition_MarineState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_MarineState : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAiEnemyMarineState MarineStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy POIComputationPolicy;
    
public:
    UPOICondition_MarineState();

};

