#pragma once
#include "CoreMinimal.h"
#include "Event_Character_InteractiveComponent_boolDelegate.generated.h"

class AASFCharacter;
class UInteractiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Character_InteractiveComponent_bool, AASFCharacter*, Character, UInteractiveComponent*, InteractiveComponent, bool, B);

