#pragma once
#include "CoreMinimal.h"
#include "PlayerPictureUpdatedEventDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerPictureUpdatedEvent, UTexture2D*, PlayerPictureTexture);

