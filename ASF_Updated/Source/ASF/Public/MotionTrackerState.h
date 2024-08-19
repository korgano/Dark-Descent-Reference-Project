#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Event_MotionTracker_ActivationDelegate.h"
#include "MotionTrackerState.generated.h"

UCLASS(Blueprintable)
class ASF_API UMotionTrackerState : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_MotionTracker_Activation OnMotionTrackerStateChanged;
    
    UMotionTrackerState();

};

