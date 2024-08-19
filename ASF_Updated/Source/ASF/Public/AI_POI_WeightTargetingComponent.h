#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI_POI_WeightTargetingComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAI_POI_WeightTargetingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAI_POI_WeightTargetingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AffectWeight(UObject* _Target, float _PriorityValue, float _Duration);
    
};

