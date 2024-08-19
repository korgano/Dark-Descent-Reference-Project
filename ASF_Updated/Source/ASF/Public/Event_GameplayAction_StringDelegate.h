#pragma once
#include "CoreMinimal.h"
#include "Event_GameplayAction_StringDelegate.generated.h"

class UGameplayAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_GameplayAction_String, UGameplayAction*, GA, const FString&, ActionName);

