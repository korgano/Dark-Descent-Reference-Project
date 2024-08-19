#pragma once
#include "CoreMinimal.h"
#include "DamageReceiverComponent.h"
#include "DMTDamageReceiverComponent.generated.h"

class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UDMTDamageReceiverComponent : public UDamageReceiverComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> Effect_State_Dead_Class;
    
    UDMTDamageReceiverComponent(const FObjectInitializer& ObjectInitializer);

};

