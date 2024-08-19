#pragma once
#include "CoreMinimal.h"
#include "Feedback_EventOnActor.h"
#include "Event_EventOnActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FEvent_EventOnActor, AActor*, _Actor, const FFeedback_EventOnActor&, _Event);

