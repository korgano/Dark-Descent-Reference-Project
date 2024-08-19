#pragma once
#include "CoreMinimal.h"
#include "CombatComponent.h"
#include "EnemyCombatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UEnemyCombatComponent : public UCombatComponent {
    GENERATED_BODY()
public:
    UEnemyCombatComponent(const FObjectInitializer& ObjectInitializer);

};

