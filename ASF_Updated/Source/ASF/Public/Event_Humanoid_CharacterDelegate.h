#pragma once
#include "CoreMinimal.h"
#include "Event_Humanoid_CharacterDelegate.generated.h"

class AASFCharacter;
class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Humanoid_Character, AHumanoid*, Humanoid, AASFCharacter*, Character);

