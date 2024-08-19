#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BaseManagementEvent_FGameplayTagDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBaseManagementEvent_FGameplayTag, FGameplayTag, Tag);

