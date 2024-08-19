#pragma once
#include "CoreMinimal.h"
#include "StructCursorHit.h"
#include "Event_Squad_CursorHit_boolDelegate.generated.h"

class ASquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Squad_CursorHit_bool, ASquad*, Squad, FStructCursorHit, CursorHit, bool, Bool);

