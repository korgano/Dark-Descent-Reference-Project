#pragma once
#include "CoreMinimal.h"
#include "EnumMarineLocomotionOwner.h"
#include "Event_EnumMarineLocomotionOwner_ObjectDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_EnumMarineLocomotionOwner_Object, EnumMarineLocomotionOwner, OwnerType, UObject*, OwnerObject);

