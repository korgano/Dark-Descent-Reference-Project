#pragma once
#include "CoreMinimal.h"
#include "AIMarineComponent.h"
#include "EnemyAIMarineComponent.generated.h"

class ASquad;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UEnemyAIMarineComponent : public UAIMarineComponent {
    GENERATED_BODY()
public:
    UEnemyAIMarineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPerceptiedEnemiesUpdated(ASquad* _Squad, bool _EnemyPerceptied);
    
};

