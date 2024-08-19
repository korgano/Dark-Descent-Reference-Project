#pragma once
#include "CoreMinimal.h"
#include "Event_RagdollFinishedDelegate.generated.h"

class UPhysicalReactionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_RagdollFinished, UPhysicalReactionComponent*, PhysicalReactionComponent);

