#pragma once
#include "CoreMinimal.h"
#include "Event_Humanoid_Attribute_int32Delegate.generated.h"

class AHumanoid;
class UMarineAttributeDataAssets;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Humanoid_Attribute_int32, AHumanoid*, Character, UMarineAttributeDataAssets*, Attribute, int32, Duration);

