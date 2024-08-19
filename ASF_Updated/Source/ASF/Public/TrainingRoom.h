#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Room.h"
#include "TrainingRoom.generated.h"

class AHumanoid;

UCLASS(Blueprintable)
class ASF_API ATrainingRoom : public ARoom {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseMinXpGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseMaxXpGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MinXpGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxXpGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MinXpGainUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MaxXpGainUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxXpGainLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> TrainingMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> IntensiveTrainingMarines;
    
public:
    ATrainingRoom(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendMarineToIntensiveTraining(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable)
    void RetrieveMarineFromIntensiveTraining(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrainingMarine(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarineInIntensiveTraining(const AHumanoid* _Marine) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTrainingMarine(AHumanoid* _Marine);
    
};

