#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterAbductionState.h"
#include "Event_AnimComp_ChangeAbductStateDelegate.generated.h"

class AASFCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimComp_ChangeAbductState, AASFCharacter*, Character, EnumCharacterAbductionState, AbductionState);

