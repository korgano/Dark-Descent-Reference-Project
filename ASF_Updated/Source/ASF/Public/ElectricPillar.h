#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ActorWithGameplayTag.h"
#include "DamageStruct.h"
#include "SavedActorInterface.h"
#include "ElectricPillar.generated.h"

class AActor;
class ASubLevelHandler;
class UCommonSaveLoadComponent;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AElectricPillar : public AActorWithGameplayTag, public ISavedActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* CommonSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delaySequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float radiusFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageStruct DamageOnHumanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageStruct DamageOnAlien;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InactiveTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool activated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float delaySequenceSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool inFXTimer;
    
public:
    AElectricPillar(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSequence();
    
    UFUNCTION(BlueprintCallable)
    void StartSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFX();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateTag(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTimerSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnEndTimerFX();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetExplosionLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> DoDamages();
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginSubLevelUnLoad(ASubLevelHandler* Handler, const FString& StreamingLevel);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    bool SavedActorInterface_IsInitialized() override PURE_VIRTUAL(SavedActorInterface_IsInitialized, return false;);
    
    UFUNCTION()
    void SavedActorInterface_BindOnInitialized() override PURE_VIRTUAL(SavedActorInterface_BindOnInitialized,);
    
};

