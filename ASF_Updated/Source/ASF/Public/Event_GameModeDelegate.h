#pragma once
#include "CoreMinimal.h"
#include "Event_GameModeDelegate.generated.h"

class AASFGameModeBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_GameMode, AASFGameModeBase*, GameMode);

