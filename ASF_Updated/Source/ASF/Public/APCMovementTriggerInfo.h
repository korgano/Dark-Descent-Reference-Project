#pragma once
#include "CoreMinimal.h"
#include "EAPCMovementTriggerType.h"
#include "EMovementOrderFrom.h"
#include "TriggerInfo.h"
#include "APCMovementTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UAPCMovementTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntryPointNameToListen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAPCMovementTriggerType MovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckOrderMovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementOrderFrom OrderMovement;
    
    UAPCMovementTriggerInfo();

};

