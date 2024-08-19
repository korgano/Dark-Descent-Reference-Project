#pragma once
#include "CoreMinimal.h"
#include "DamageResultStruct.h"
#include "Event_Character_DamageResultDelegate.generated.h"

class AASFCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Character_DamageResult, AASFCharacter*, ActorKilled, const FDamageResultStruct&, _DamageResult);

