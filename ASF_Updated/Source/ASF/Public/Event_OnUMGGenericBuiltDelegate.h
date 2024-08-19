#pragma once
#include "CoreMinimal.h"
#include "Event_OnUMGGenericBuiltDelegate.generated.h"

class UUMGGenericSlateWindowComponent;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_OnUMGGenericBuilt, UUMGGenericSlateWindowComponent*, slateWindow, UUserWidget*, UMG);

