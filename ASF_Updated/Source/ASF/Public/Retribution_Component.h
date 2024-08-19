#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "DamageResultStruct.h"
#include "EStressStep.h"
#include "Event_Retribution_ActivatedDelegate.h"
#include "Event_Retribution_ChangedDelegate.h"
#include "Event_Retribution_OverDelegate.h"
#include "Retribution_Component.generated.h"

class AASFCharacter;
class AActor;
class AHumanoidMarine;
class ASquad;
class URetribution_DataAsset;
class UStress_Component;
class UTinda_Attribute;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API URetribution_Component : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> RetributionMemberEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> RetributionSquadEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URetribution_DataAsset* RetributionDataAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Retribution_Activated OnRetributionActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Retribution_Over OnRetributionOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Retribution_Changed Event_Retribution_Changed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RetributionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool RetributionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float RetributionAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* RetributionMultiplier;
    
public:
    URetribution_Component(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RetributionTimerOver();
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberRemoved(ASquad* _Squad, AHumanoidMarine* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberAdded(ASquad* _Squad, AHumanoidMarine* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberNewStressStep(UStress_Component* Stress, EStressStep _OldStressStep, EStressStep _NewStressStep);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberDamageReceived(AActor* ActorWounded, const FDamageResultStruct& Damage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRetributionModeActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URetribution_DataAsset* GetRetributionDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRetributionAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateRetribution() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRetribution(float _Amount);
    
    UFUNCTION(BlueprintCallable)
    void ActivateRetribution();
    
};

