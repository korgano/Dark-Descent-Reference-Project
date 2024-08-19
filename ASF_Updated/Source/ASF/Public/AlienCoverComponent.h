#pragma once
#include "CoreMinimal.h"
#include "CoverComponent.h"
#include "AlienCoverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAlienCoverComponent : public UCoverComponent {
    GENERATED_BODY()
public:
    UAlienCoverComponent(const FObjectInitializer& ObjectInitializer);

};

