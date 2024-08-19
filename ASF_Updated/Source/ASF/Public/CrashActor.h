#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrashActor.generated.h"

class ACrashActor;

UCLASS(Blueprintable)
class ASF_API ACrashActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACrashActor* CrashActor;
    
    ACrashActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ACrashActor* Crash();
    
};

