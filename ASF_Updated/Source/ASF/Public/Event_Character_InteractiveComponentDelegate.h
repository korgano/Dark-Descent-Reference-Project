#pragma once
#include "CoreMinimal.h"
#include "Event_Character_InteractiveComponentDelegate.generated.h"

class AASFCharacter;
class UInteractiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Character_InteractiveComponent, AASFCharacter*, Character, UInteractiveComponent*, InteractiveComponent);

