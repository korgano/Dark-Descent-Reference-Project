#pragma once
#include "CoreMinimal.h"
#include "EnnemyTargetingComponent.h"
#include "WeylandMarineTargetingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UWeylandMarineTargetingComponent : public UEnnemyTargetingComponent {
    GENERATED_BODY()
public:
    UWeylandMarineTargetingComponent(const FObjectInitializer& ObjectInitializer);

};

