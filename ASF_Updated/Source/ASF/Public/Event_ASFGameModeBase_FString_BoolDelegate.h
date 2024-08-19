#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameModeBase_FString_BoolDelegate.generated.h"

class AASFGameModeBase_TacticalMode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FEvent_ASFGameModeBase_FString_Bool, AASFGameModeBase_TacticalMode*, GameMode, const FString&, Building, bool, bActivate);

