#pragma once
#include "CoreMinimal.h"
#include "EnumAlienLocomotionOwner.h"
#include "Event_AnimComp_EnumAlienLocomotionOwnerDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimComp_EnumAlienLocomotionOwner, EnumAlienLocomotionOwner, OwnerType, UObject*, OwnerObject);

