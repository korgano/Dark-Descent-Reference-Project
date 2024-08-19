#pragma once
#include "CoreMinimal.h"
#include "SaveLoadComponent.h"
#include "CommonSaveLoadComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCommonSaveLoadComponent : public USaveLoadComponent {
    GENERATED_BODY()
public:
    UCommonSaveLoadComponent(const FObjectInitializer& ObjectInitializer);

};

