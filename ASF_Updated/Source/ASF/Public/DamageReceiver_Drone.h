#pragma once
#include "CoreMinimal.h"
#include "DamageReceiverComponent.h"
#include "DamageReceiver_Drone.generated.h"

class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UDamageReceiver_Drone : public UDamageReceiverComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> Effect_State_Dead_Class;
    
    UDamageReceiver_Drone(const FObjectInitializer& ObjectInitializer);

};

