#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_UDamageReceiverComponent_GameplayTagDelegate.generated.h"

class UDamageReceiverComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UDamageReceiverComponent_GameplayTag, UDamageReceiverComponent*, DamageReceiver, FGameplayTag, Tag);

