#pragma once
#include "CoreMinimal.h"
#include "EnumDestroyReason.h"
#include "Event_Actor_EnumDestroyReasonDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Actor_EnumDestroyReason, AActor*, ActorKilled, EnumDestroyReason, DestroyReason);

