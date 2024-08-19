#pragma once
#include "CoreMinimal.h"
#include "Event_Action_ASFCharacterDelegate.generated.h"

class AASFCharacter;
class UAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Action_ASFCharacter, UAction*, Action, AASFCharacter*, Character);

