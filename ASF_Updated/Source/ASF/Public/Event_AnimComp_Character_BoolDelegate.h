#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_Character_BoolDelegate.generated.h"

class AASFCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimComp_Character_Bool, AASFCharacter*, Character, bool, ValueBool);

