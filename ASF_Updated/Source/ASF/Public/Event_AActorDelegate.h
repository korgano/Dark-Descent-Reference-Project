#pragma once
#include "CoreMinimal.h"
#include "Event_AActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AActor, AActor*, NavReconstructionActor);

