#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "EnumActionStatus.h"
#include "Templates/SubclassOf.h"
#include "TriggerInfo.h"
#include "InteractionCharacIDTriggerInfo.generated.h"

class UInteractiveComponent;

UCLASS(Blueprintable)
class ASF_API UInteractionCharacIDTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractiveComponent> InteractionTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumActionStatus StatutToTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OptionalTargetInteractiveComponentTag;
    
    UInteractionCharacIDTriggerInfo();

};

