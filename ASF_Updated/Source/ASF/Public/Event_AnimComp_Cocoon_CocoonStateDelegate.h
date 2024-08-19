#pragma once
#include "CoreMinimal.h"
#include "EnumCocoonState.h"
#include "Event_AnimComp_Cocoon_CocoonStateDelegate.generated.h"

class ACocoon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimComp_Cocoon_CocoonState, ACocoon*, Cocoon, EnumCocoonState, CocoonState);

