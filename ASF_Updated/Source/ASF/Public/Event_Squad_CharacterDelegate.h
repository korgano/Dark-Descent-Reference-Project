#pragma once
#include "CoreMinimal.h"
#include "Event_Squad_CharacterDelegate.generated.h"

class AASFCharacter;
class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Squad_Character, ASquad*, Squad, AASFCharacter*, Character);

