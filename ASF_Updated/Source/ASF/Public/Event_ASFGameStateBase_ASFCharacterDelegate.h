#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameStateBase_ASFCharacterDelegate.generated.h"

class AASFCharacter;
class AASFGameStateBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameStateBase_ASFCharacter, AASFGameStateBase*, GameState, AASFCharacter*, Character);

