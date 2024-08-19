#pragma once
#include "CoreMinimal.h"
#include "Callback_AMinimapHandler_WaypointDelegate.generated.h"

class AEntryPoint;
class AMinimapHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCallback_AMinimapHandler_Waypoint, AMinimapHandler*, MinimapHandler, AEntryPoint*, Waypoint);

