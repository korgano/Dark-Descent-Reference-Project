#pragma once
#include "CoreMinimal.h"
#include "EnumAlienAnimPhase.h"
#include "Event_AnimComp_AnimPhaseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_AnimPhase, EnumAlienAnimPhase, Phase);

