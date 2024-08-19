#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Tinda_GameplayTagAssetInterface.h"
#include "EAntiAircraft_TurretState.h"
#include "Event_TurretDelegate.h"
#include "AntiAircraft_Turret.generated.h"

class AAntiAircraft_Missile;
class UAntiAir_Turret_DataAsset;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AAntiAircraft_Turret : public AActor, public ITinda_GameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAntiAircraft_Missile*> AntiAircraft_Missiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAntiAircraft_TurretState AntiAircraft_TurretState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Turret AntiAircraft_TurretStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAntiAir_Turret_DataAsset* PDA_AntiAir_Turret;
    
    AAntiAircraft_Turret(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAntiAircraft_TurretState(EAntiAircraft_TurretState _AntiAircraft_TurretState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AAntiAircraft_Missile*> FireMissile(int32 _NbMissile, AActor* _Target, float DelayBeforeLaunch);
    

    // Fix for true pure virtual functions not being implemented
private:
    UFUNCTION(BlueprintCallable)
    void SetTindaOwnedGameplayTags(FGameplayTagContainer& _TagContainer) override PURE_VIRTUAL(SetTindaOwnedGameplayTags,);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveTag(FGameplayTag TagToRemove) override PURE_VIRTUAL(RemoveTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingTindaGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingTindaGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingExactTindaGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingExactTindaGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingTindaGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAnyMatchingTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingExactTindaGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAnyMatchingExactTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingTindaGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAllMatchingTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingExactTindaGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAllMatchingExactTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetTindaOwnedGameplayTags(FGameplayTagContainer& _TagContainer) const override PURE_VIRTUAL(GetTindaOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> FindGameplayTagsMatching(FGameplayTag _TagToCheck) const override PURE_VIRTUAL(FindGameplayTagsMatching, return TArray<FGameplayTag>(););
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag FindGameplayTagMatching(FGameplayTag _TagToCheck) const override PURE_VIRTUAL(FindGameplayTagMatching, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer ClearAllTagsWithoutEffect() override PURE_VIRTUAL(ClearAllTagsWithoutEffect, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    bool AddLeafGameplayTag(FGameplayTag TagToAdd) override PURE_VIRTUAL(AddLeafGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTagFast(FGameplayTag TagToAdd) override PURE_VIRTUAL(AddGameplayTagFast,);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag TagToAdd) override PURE_VIRTUAL(AddGameplayTag,);
    
};

