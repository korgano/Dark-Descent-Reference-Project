#pragma once
#include "CoreMinimal.h"
#include "Event_GameMode_SaveErrorDelegate.generated.h"

class AASFGameModeBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_GameMode_SaveError, AASFGameModeBase*, GameMode, const FString&, SaveError);

