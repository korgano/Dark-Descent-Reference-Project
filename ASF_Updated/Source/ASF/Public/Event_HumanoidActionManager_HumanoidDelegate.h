#pragma once
#include "CoreMinimal.h"
#include "Event_HumanoidActionManager_HumanoidDelegate.generated.h"

class AASFCharacter;
class UHumanoidActionManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_HumanoidActionManager_Humanoid, UHumanoidActionManager*, HumanoidActionManager, AASFCharacter*, HumanoideCharacter);

