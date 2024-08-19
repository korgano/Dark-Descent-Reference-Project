#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumAlienAttackType.h"
#include "Event_AnimComp_AttackChoreographyDelegate.generated.h"

class AASFCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_AnimComp_AttackChoreography, EnumAlienAttackType, AttackType, AASFCharacter*, OtherCharacter, FVector, Destination);

