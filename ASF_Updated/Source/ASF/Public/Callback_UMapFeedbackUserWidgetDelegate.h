#pragma once
#include "CoreMinimal.h"
#include "Callback_UMapFeedbackUserWidgetDelegate.generated.h"

class UMapFeedbackUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCallback_UMapFeedbackUserWidget, UMapFeedbackUserWidget*, MapFeedbackUserWidget);

