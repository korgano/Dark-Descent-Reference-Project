#pragma once
#include "CoreMinimal.h"
#include "EnumAlienDeathType.h"
#include "Event_AnimComp_PlayDeathDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_PlayDeath, EnumAlienDeathType, Type);

