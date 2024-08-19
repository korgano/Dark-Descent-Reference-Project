#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameModeBase_SubLevelHandlerDelegate.generated.h"

class AASFGameModeBase_TacticalMode;
class ASubLevelHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameModeBase_SubLevelHandler, AASFGameModeBase_TacticalMode*, GameMode, ASubLevelHandler*, SubLevelHandler);

