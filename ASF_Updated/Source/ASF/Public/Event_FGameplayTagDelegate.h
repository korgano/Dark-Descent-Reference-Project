#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_FGameplayTagDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_FGameplayTag, FGameplayTag, Tag);

