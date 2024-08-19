#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Event_ThrowItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ThrowItem, FVector, _Direction, float, _LaunchDuration);

