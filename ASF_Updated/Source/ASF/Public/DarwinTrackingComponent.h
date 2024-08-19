#pragma once
#include "CoreMinimal.h"
#include "EnnemyTrackingComponent.h"
#include "DarwinTrackingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UDarwinTrackingComponent : public UEnnemyTrackingComponent {
    GENERATED_BODY()
public:
    UDarwinTrackingComponent(const FObjectInitializer& ObjectInitializer);

};

