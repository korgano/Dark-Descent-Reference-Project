#pragma once
#include "CoreMinimal.h"
#include "EnemyStatComponent.h"
#include "AlienStatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAlienStatComponent : public UEnemyStatComponent {
    GENERATED_BODY()
public:
    UAlienStatComponent(const FObjectInitializer& ObjectInitializer);

};

