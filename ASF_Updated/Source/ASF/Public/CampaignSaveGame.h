#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CampaignSaveGame.generated.h"

UCLASS(Blueprintable)
class ASF_API UCampaignSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaxedSergeant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaxedGunner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaxedTecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaxedMedic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaxedRecon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaxedAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool marineLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedFeatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TriggeredTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> MissionsProgression;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DatapadsGathered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemiesKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueensKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SurvivorsSaved;
    
public:
    UCampaignSaveGame();

    UFUNCTION(BlueprintCallable)
    int32 IncrementSurvivorsSaved();
    
    UFUNCTION(BlueprintCallable)
    int32 IncrementQueensKilled();
    
    UFUNCTION(BlueprintCallable)
    void IncrementEnemiesKilled();
    
    UFUNCTION(BlueprintCallable)
    void IncrementDatapadsGathered();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSurvivorsSaved() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemiesKilled() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDatapadsGatheringProgress();
    
    UFUNCTION(BlueprintCallable)
    bool CheckDatapadsRemaining();
    
};

