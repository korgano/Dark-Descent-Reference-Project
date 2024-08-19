#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "CursorLocalPlayerSubsystem.generated.h"

UCLASS(Blueprintable)
class ASF_API UCursorLocalPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UCursorLocalPlayerSubsystem();

    UFUNCTION(BlueprintCallable)
    void AskReleaseAnimation();
    
    UFUNCTION(BlueprintCallable)
    void AskPressAnimation();
    
    UFUNCTION(BlueprintCallable)
    void AskClickAnimation();
    
};

