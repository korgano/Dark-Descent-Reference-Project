#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameModeBaseDelegate.generated.h"

class AASFGameModeBase_TacticalMode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ASFGameModeBase, AASFGameModeBase_TacticalMode*, GameMode);

