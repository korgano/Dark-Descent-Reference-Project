#pragma once
#include "CoreMinimal.h"
#include "RotateInPlace.h"
#include "Event_RotateInPlaceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_RotateInPlace, FRotateInPlace, Param);

