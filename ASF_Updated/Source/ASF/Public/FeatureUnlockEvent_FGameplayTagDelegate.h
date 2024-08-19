#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FeatureUnlockEvent_FGameplayTagDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFeatureUnlockEvent_FGameplayTag, FGameplayTag, Tag);

