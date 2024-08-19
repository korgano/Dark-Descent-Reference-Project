#pragma once
#include "CoreMinimal.h"
#include "DamageReceiverComponent.h"
#include "SyntheticDamageReceiverComponent.generated.h"

class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USyntheticDamageReceiverComponent : public UDamageReceiverComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> HeavyWounds;
    
    USyntheticDamageReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

