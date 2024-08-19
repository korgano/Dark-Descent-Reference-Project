#pragma once
#include "CoreMinimal.h"
#include "Event_Character_boolDelegate.generated.h"

class AASFCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Character_bool, AASFCharacter*, Character, bool, bBool);

