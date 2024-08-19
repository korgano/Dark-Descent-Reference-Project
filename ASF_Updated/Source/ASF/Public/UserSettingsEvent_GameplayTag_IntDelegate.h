#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UserSettingsEvent_GameplayTag_IntDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserSettingsEvent_GameplayTag_Int, FGameplayTag, SettingTag, int32, Value);

