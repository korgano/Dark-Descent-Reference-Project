#pragma once
#include "CoreMinimal.h"
#include "Event_AnimNotify_AnimComponentDelegate.generated.h"

class UAnimationComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimNotify_AnimComponent, UAnimationComponent*, AnimationComponent);

