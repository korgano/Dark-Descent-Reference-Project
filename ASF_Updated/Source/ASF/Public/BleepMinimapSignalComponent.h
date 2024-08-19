#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "BleepMinimapSignalComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UBleepMinimapSignalComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UBleepMinimapSignalComponent(const FObjectInitializer& ObjectInitializer);

};

