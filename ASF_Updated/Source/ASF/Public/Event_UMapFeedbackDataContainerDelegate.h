#pragma once
#include "CoreMinimal.h"
#include "Event_UMapFeedbackDataContainerDelegate.generated.h"

class UMapFeedbackDataContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UMapFeedbackDataContainer, UMapFeedbackDataContainer*, MapFeedbackDataContainer);

