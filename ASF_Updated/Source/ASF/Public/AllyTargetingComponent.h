#pragma once
#include "CoreMinimal.h"
#include "POITargetingComponent.h"
#include "AllyTargetingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAllyTargetingComponent : public UPOITargetingComponent {
    GENERATED_BODY()
public:
    UAllyTargetingComponent(const FObjectInitializer& ObjectInitializer);

};

