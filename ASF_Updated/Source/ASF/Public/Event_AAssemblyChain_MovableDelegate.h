#pragma once
#include "CoreMinimal.h"
#include "Event_AAssemblyChain_MovableDelegate.generated.h"

class AAssemblyChain_Movable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AAssemblyChain_Movable, AAssemblyChain_Movable*, OverlappingMovable);

