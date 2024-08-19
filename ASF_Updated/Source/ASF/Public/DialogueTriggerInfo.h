#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "DialogueTriggerInfo.generated.h"

class UAcknow_DataAsset;

UCLASS(Blueprintable)
class ASF_API UDialogueTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAcknow_DataAsset* DialogueAsset;
    
    UDialogueTriggerInfo();

};

