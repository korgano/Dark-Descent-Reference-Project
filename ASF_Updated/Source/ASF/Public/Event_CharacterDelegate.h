#pragma once
#include "CoreMinimal.h"
#include "Event_CharacterDelegate.generated.h"

class AASFCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_Character, AASFCharacter*, Character);

