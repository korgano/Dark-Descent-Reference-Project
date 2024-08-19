#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UserSettingsEvent_GameplayTag_BoolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserSettingsEvent_GameplayTag_Bool, FGameplayTag, SettingTag, bool, Value);

