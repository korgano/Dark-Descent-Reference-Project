#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumDodgingType.h"
#include "Event_AnimComp_DodgeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEvent_AnimComp_Dodge, EnumDodgingType, DodgeType, FVector, Destination, float, TimeDodge, float, IdleAfterDodge);

