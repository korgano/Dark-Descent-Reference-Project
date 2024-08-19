#pragma once
#include "CoreMinimal.h"
#include "EnnemyTrackingComponent.h"
#include "SquadEnnemyTrackingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USquadEnnemyTrackingComponent : public UEnnemyTrackingComponent {
    GENERATED_BODY()
public:
    USquadEnnemyTrackingComponent(const FObjectInitializer& ObjectInitializer);

};

