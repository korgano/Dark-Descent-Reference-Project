#pragma once
#include "CoreMinimal.h"
#include "ASFBoxComponent.h"
#include "AutoDoorTriggerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAutoDoorTriggerComponent : public UASFBoxComponent {
    GENERATED_BODY()
public:
    UAutoDoorTriggerComponent(const FObjectInitializer& ObjectInitializer);

};

