#pragma once
#include "CoreMinimal.h"
#include "VoiceManagerEvent_int32Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVoiceManagerEvent_int32, int32, SpeakerID);

