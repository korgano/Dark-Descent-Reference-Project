#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_Character_FGameplayTag_FloatDelegate.generated.h"

class AASFCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Character_FGameplayTag_Float, AASFCharacter*, Character, FGameplayTag, ImpactTag, float, _ImpactDuration);

