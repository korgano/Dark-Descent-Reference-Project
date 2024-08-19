#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent.h"
#include "InteractiveComponent_Enemy.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Enemy : public UInteractiveComponent {
    GENERATED_BODY()
public:
    UInteractiveComponent_Enemy(const FObjectInitializer& ObjectInitializer);

};

