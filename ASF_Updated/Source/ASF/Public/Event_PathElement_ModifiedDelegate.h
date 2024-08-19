#pragma once
#include "CoreMinimal.h"
#include "Event_PathElement_ModifiedDelegate.generated.h"

class UTinda_Effect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_PathElement_Modified, UTinda_Effect*, addedEffect);

