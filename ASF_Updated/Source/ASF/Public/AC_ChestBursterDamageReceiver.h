#pragma once
#include "CoreMinimal.h"
#include "AlienDamageReceiverComponent.h"
#include "AC_ChestBursterDamageReceiver.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAC_ChestBursterDamageReceiver : public UAlienDamageReceiverComponent {
    GENERATED_BODY()
public:
    UAC_ChestBursterDamageReceiver(const FObjectInitializer& ObjectInitializer);

};

