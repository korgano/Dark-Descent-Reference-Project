#pragma once
#include "CoreMinimal.h"
#include "EnnemyTrackingComponent.h"
#include "WeylandTrackingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UWeylandTrackingComponent : public UEnnemyTrackingComponent {
    GENERATED_BODY()
public:
    UWeylandTrackingComponent(const FObjectInitializer& ObjectInitializer);

};

