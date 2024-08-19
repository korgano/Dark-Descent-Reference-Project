#pragma once
#include "CoreMinimal.h"
#include "Event_AMinimapHandler_AActorDelegate.generated.h"

class AActor;
class AMinimapHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AMinimapHandler_AActor, AMinimapHandler*, Handler, AActor*, DynamicObject);

