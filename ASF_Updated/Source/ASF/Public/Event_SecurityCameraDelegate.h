#pragma once
#include "CoreMinimal.h"
#include "Event_SecurityCameraDelegate.generated.h"

class ASecurityCamera;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SecurityCamera, ASecurityCamera*, SecurityCamera);

