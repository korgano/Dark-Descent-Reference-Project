#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MotionTracker.generated.h"

UCLASS(Blueprintable)
class ASF_API AMotionTracker : public AActor {
    GENERATED_BODY()
public:
    AMotionTracker(const FObjectInitializer& ObjectInitializer);

};

