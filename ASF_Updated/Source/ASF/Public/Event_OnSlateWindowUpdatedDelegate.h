#pragma once
#include "CoreMinimal.h"
#include "Event_OnSlateWindowUpdatedDelegate.generated.h"

class UTextureRenderTarget2D;
class UUMGSlateWindowComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_OnSlateWindowUpdated, UUMGSlateWindowComponent*, slateWindow, const TArray<UTextureRenderTarget2D*>&, cameraTexture, const TArray<int32>&, squadMemberID);

