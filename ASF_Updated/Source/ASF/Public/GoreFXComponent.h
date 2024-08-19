#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "DamageResultStruct.h"
#include "GoreFXComponent.generated.h"

class AASFCharacter;
class AActor;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UGoreFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGoreFXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWoundReceived(AActor* _Actor, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeath(AASFCharacter* _Character, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageReceived(AActor* _Actor, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBleedStateChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _EffectTag, bool _bAdded);
    
};

