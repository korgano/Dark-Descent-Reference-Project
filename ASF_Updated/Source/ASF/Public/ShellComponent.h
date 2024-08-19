#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ShellComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UShellComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UShellComponent(const FObjectInitializer& ObjectInitializer);

};

