#pragma once
#include "CoreMinimal.h"
#include "EnumHover.h"
#include "Event_Hover_Actor_bool_EnumHoverDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Hover_Actor_bool_EnumHover, AActor*, Character, bool, bBool, EnumHover, HoverType);

