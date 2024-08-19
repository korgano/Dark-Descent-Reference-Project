#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_Character_NameDelegate.generated.h"

class AASFCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimComp_Character_Name, AASFCharacter*, ValueCharacter, const FName&, ValueName);

