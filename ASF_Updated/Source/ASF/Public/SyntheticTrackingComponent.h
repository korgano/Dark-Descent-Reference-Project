#pragma once
#include "CoreMinimal.h"
#include "EnnemyTrackingComponent.h"
#include "SyntheticTrackingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USyntheticTrackingComponent : public UEnnemyTrackingComponent {
    GENERATED_BODY()
public:
    USyntheticTrackingComponent(const FObjectInitializer& ObjectInitializer);

};

