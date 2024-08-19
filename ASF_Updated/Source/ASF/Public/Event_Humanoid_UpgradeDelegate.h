#pragma once
#include "CoreMinimal.h"
#include "Event_Humanoid_UpgradeDelegate.generated.h"

class AHumanoid;
class UUpgradeDataAssets;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Humanoid_Upgrade, AHumanoid*, Character, UUpgradeDataAssets*, Upgrade);

