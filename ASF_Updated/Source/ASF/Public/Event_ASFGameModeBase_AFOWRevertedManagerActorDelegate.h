#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameModeBase_AFOWRevertedManagerActorDelegate.generated.h"

class AASFGameModeBase_TacticalMode;
class AFOWRevertedManagerActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameModeBase_AFOWRevertedManagerActor, AASFGameModeBase_TacticalMode*, GameMode, AFOWRevertedManagerActor*, FOWManager);

