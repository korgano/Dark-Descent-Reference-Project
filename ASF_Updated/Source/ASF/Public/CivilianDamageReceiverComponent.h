#pragma once
#include "CoreMinimal.h"
#include "DamageReceiverComponent.h"
#include "CivilianDamageReceiverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCivilianDamageReceiverComponent : public UDamageReceiverComponent {
    GENERATED_BODY()
public:
    UCivilianDamageReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

