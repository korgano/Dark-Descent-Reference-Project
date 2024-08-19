#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Callback_AMinimapHandler_FVector2D_FloatDelegate.generated.h"

class AMinimapHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCallback_AMinimapHandler_FVector2D_Float, AMinimapHandler*, MinimapHandler, FVector2D, UVOffset, float, Zoom);

