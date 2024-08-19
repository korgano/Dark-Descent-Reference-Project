#pragma once
#include "CoreMinimal.h"
#include "Event_Bool_NarrativeFreezeGADelegate.generated.h"

class UNarrativeFreezeGameplayAction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Bool_NarrativeFreezeGA, bool, IsActive, UNarrativeFreezeGameplayAction*, NarrativeFreezeGA);

