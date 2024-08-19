#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InputActionBinder.generated.h"

UCLASS(Blueprintable)
class ASF_API AInputActionBinder : public AActor {
    GENERATED_BODY()
public:
    AInputActionBinder(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnKeyEvent();
    
};

