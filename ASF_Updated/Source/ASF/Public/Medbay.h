#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_int32_int32Delegate.h"
#include "Room.h"
#include "WoundedMarine.h"
#include "Medbay.generated.h"

class AHumanoid;

UCLASS(Blueprintable)
class ASF_API AMedbay : public ARoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_int32_int32 OnPhysiciansUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BasePhysicianCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPhysicianCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Physicians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 AssignedPhysicians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CareDurationPerLostHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCareDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhysicianAssignmentCareDurationReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CareDurationReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> CareDurationReductionUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProsthesisMaterialsCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisabledPassiveCareDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FWoundedMarine> WoundedMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFirstVisitSinceMission09;
    
public:
    AMedbay(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SortWoundedMarines(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWoundedMarine(int32 _MarineID);
    
    UFUNCTION(BlueprintCallable)
    void RemovePhysicians(int32 _Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailablePhysician() const;
    
    UFUNCTION(BlueprintCallable)
    void GetWoundedMarines(TArray<AHumanoid*>& _WoundedMarines);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWoundedMarine GetWoundedMarine(int32 _MarineID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailablePhysicians() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordProsthesis() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignProsthesis(int32 _MarineID);
    
    UFUNCTION(BlueprintCallable)
    void AssignPhysician(int32 _MarineID);
    
    UFUNCTION(BlueprintCallable)
    bool AddWoundedMarine(AHumanoid* _Marine, float _CareDurationMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void AddPhysicians(int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    void AddPhysician();
    
    UFUNCTION(BlueprintCallable)
    void AddDisabledPassiveCareDuration(int32 _Turns);
    
    UFUNCTION(BlueprintCallable)
    void AddCareDuration(AHumanoid* _Marine, int32 _CareDuration);
    
};

