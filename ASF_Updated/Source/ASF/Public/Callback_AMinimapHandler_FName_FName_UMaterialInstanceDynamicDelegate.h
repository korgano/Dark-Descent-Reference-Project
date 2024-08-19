#pragma once
#include "CoreMinimal.h"
#include "Callback_AMinimapHandler_FName_FName_UMaterialInstanceDynamicDelegate.generated.h"

class AMinimapHandler;
class UMaterialInstanceDynamic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCallback_AMinimapHandler_FName_FName_UMaterialInstanceDynamic, AMinimapHandler*, MinimapHandler, FName, MinimapCurrentLevel, FName, MinimapCurrentSubLevel, UMaterialInstanceDynamic*, MapShader);

