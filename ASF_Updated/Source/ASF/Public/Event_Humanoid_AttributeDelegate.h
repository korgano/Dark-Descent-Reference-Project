#pragma once
#include "CoreMinimal.h"
#include "Event_Humanoid_AttributeDelegate.generated.h"

class AHumanoid;
class UMarineAttributeDataAssets;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Humanoid_Attribute, AHumanoid*, Character, UMarineAttributeDataAssets*, Attribute);

