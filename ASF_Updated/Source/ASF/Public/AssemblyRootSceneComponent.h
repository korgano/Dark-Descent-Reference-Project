#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AssemblyRootSceneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAssemblyRootSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAssemblyRootSceneComponent(const FObjectInitializer& ObjectInitializer);

};

