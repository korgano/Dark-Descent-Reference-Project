#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "InventorySubObjectiveTriggerInfo.generated.h"

class AObjective;

UCLASS(Blueprintable)
class ASF_API UInventorySubObjectiveTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjective* Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubObjectiveTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbItemToReach;
    
    UInventorySubObjectiveTriggerInfo();

};

