#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ASFBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASFBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UASFBoxComponent(const FObjectInitializer& ObjectInitializer);

};

