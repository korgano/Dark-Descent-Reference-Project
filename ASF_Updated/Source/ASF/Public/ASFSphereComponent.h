#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ASFSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASFSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UASFSphereComponent(const FObjectInitializer& ObjectInitializer);

};

