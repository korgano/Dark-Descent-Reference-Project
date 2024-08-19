#pragma once
#include "CoreMinimal.h"
#include "Event_BMGameModeDelegate.generated.h"

class AASFGameModeBase_BaseManagement;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_BMGameMode, AASFGameModeBase_BaseManagement*, BMGameMode);

