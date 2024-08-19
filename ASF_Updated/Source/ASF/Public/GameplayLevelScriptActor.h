#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "GameplayLevelScriptActor.generated.h"

class AGameplayTwinHandler;
class UObject;

UCLASS(Blueprintable)
class ASF_API AGameplayLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    AGameplayLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static AGameplayTwinHandler* GetGameplayTwinHandler(UObject* WorldRef);
    
};

