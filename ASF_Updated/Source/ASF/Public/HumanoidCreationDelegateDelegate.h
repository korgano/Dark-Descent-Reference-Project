#pragma once
#include "CoreMinimal.h"
#include "HumanoidCreationDelegateDelegate.generated.h"

class AASFGameModeBase_TacticalMode;
class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FHumanoidCreationDelegate, AASFGameModeBase_TacticalMode*, GameMode, AHumanoid*, Humanoid);

