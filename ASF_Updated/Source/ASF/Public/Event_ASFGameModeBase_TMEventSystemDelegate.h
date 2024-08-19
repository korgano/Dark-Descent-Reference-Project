#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameModeBase_TMEventSystemDelegate.generated.h"

class AASFGameModeBase_TacticalMode;
class ATMEventSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameModeBase_TMEventSystem, AASFGameModeBase_TacticalMode*, GameMode, ATMEventSystem*, EventSystem);

