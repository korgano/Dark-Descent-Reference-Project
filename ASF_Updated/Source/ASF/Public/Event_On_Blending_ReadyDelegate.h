#pragma once
#include "CoreMinimal.h"
#include "Event_On_Blending_ReadyDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_On_Blending_Ready, UObject*, BlendingObject);

