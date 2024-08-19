#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "BleepSignalComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UBleepSignalComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UBleepSignalComponent(const FObjectInitializer& ObjectInitializer);

};

