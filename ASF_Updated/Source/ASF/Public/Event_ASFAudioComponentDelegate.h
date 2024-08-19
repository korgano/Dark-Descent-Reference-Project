#pragma once
#include "CoreMinimal.h"
#include "Event_ASFAudioComponentDelegate.generated.h"

class UASFAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ASFAudioComponent, UASFAudioComponent*, ASFAudioComponent);

