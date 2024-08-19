#pragma once
#include "CoreMinimal.h"
#include "DamageReceiverComponent.h"
#include "AlienDamageReceiverComponent.generated.h"

class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAlienDamageReceiverComponent : public UDamageReceiverComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> HeavyWounds;
    
    UAlienDamageReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

