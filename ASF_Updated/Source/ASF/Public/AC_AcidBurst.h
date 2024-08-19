#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AC_AcidBurst.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAC_AcidBurst : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceOfAcidBurst;
    
    UAC_AcidBurst(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spawn_AcidBurst(float _DamageMin, float _DamageMax, float _Range);
    
    UFUNCTION(BlueprintCallable)
    static void SetShowAcidBurster(bool _ShowAcidBurster);
    
    UFUNCTION(BlueprintCallable)
    void Log_AcidBurst(const FString& _Log);
    
    UFUNCTION(BlueprintCallable)
    static bool GetShowAcidBurster();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceAcidBurst(bool bTryDoDamage);
    
};

