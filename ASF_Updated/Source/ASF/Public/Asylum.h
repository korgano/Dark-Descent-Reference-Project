#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Room.h"
#include "TreatedMarine.h"
#include "Asylum.generated.h"

class AHumanoid;

UCLASS(Blueprintable)
class ASF_API AAsylum : public ARoom {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TreatmentTraumaPointsPerTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseMinTreatmentTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseMaxTreatmentTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MinTreatmentTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxTreatmentTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MinTreatmentTurnsUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MaxTreatmentTurnsUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TreatmentSlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FTreatedMarine> TreatedMarines;
    
public:
    AAsylum(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TreatMarine(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable)
    void StopTreatment(int32 _MarineID);
    
    UFUNCTION(BlueprintCallable)
    void SortTreatedMarinesByCareDuration(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines);
    
    UFUNCTION(BlueprintCallable)
    void SortMarinesByCareDuration(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarineTreated(int32 _MarineID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTreatmentDuration(const AHumanoid* _Marine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTreatedMarine GetTreatedMarine(int32 _MarineID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingTurnsToRecovery(AHumanoid* _Marine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableSlots() const;
    
};

