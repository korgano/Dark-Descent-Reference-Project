#pragma once
#include "CoreMinimal.h"
#include "TraumaApplied.h"
#include "Event_Humanoid_Trauma_TraumaDelegate.generated.h"

class AHumanoid;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Humanoid_Trauma_Trauma, AHumanoid*, Character, const FTraumaApplied&, _OldTrauma, const FTraumaApplied&, _NewTrauma);

