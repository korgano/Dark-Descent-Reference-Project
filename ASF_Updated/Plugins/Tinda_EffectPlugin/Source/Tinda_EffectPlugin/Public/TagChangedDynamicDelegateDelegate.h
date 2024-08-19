#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagChangedDynamicDelegateDelegate.generated.h"

class UTinda_EffectHandlerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FTagChangedDynamicDelegate, UTinda_EffectHandlerComponent*, EffectHandler, FGameplayTag, Effect, bool, bAdded);

