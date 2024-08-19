#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_AnimComp_TagDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_Tag, FGameplayTag, ValueTag);

