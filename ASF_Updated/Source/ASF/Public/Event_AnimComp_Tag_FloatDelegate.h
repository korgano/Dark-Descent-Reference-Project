#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_AnimComp_Tag_FloatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimComp_Tag_Float, FGameplayTag, ValueTag, float, ValueFloat);

