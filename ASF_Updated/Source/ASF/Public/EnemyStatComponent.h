#pragma once
#include "CoreMinimal.h"
#include "StatComponent.h"
#include "EnemyStatComponent.generated.h"

class UAIPerceptionListenerComponent;
class UTinda_Attribute;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UEnemyStatComponent : public UStatComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* NoiseDetectionRangeAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* StunDurationAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionListenerComponent* OwnerPerceptionComponent;
    
    UEnemyStatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNoiseDetectionRangeUpdated(UTinda_Attribute* _MovementSpeedAttribute, float _OldValue, float _NewValue);
    
};

