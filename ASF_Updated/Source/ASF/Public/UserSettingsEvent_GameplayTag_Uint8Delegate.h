#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UserSettingsEvent_GameplayTag_Uint8Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserSettingsEvent_GameplayTag_Uint8, FGameplayTag, SettingTag, uint8, Value);

