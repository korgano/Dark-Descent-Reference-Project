#pragma once
#include "CoreMinimal.h"
#include "Event_GameMode_InputBinderDelegate.generated.h"

class AASFGameModeBase;
class ATutorialInputBinder;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_GameMode_InputBinder, AASFGameModeBase*, GameMode, ATutorialInputBinder*, TutorialInputBinder);

