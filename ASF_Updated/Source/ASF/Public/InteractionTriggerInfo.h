#pragma once
#include "CoreMinimal.h"
#include "EnumActionStatus.h"
#include "GameplayTwinReference.h"
#include "Templates/SubclassOf.h"
#include "TriggerInfo.h"
#include "InteractionTriggerInfo.generated.h"

class UInteractiveComponent;

UCLASS(Blueprintable)
class ASF_API UInteractionTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference ActorTargetReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractiveComponent> InteractionTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumActionStatus StatutToTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OptionalTargetInteractiveComponentTag;
    
    UInteractionTriggerInfo();

};

