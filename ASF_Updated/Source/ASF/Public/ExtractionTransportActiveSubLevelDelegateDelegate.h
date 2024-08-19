#pragma once
#include "CoreMinimal.h"
#include "ExtractionTransportActiveSubLevelDelegateDelegate.generated.h"

class AASFGameState_TacticalMode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FExtractionTransportActiveSubLevelDelegate, AASFGameState_TacticalMode*, GameState, const FString&, ExtractionTransportType, const FString&, ActiveSubLevel);

