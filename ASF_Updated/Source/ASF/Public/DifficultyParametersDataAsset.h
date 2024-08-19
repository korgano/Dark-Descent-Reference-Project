#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESaveMode.h"
#include "EnumMissionDifficulty.h"
#include "GameDifficultyParam.h"
#include "SaveModeParam.h"
#include "DifficultyParametersDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UDifficultyParametersDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameDifficultyParam> PresetDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameDifficultyParam> EnemyHealthDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameDifficultyParam> DetectionTimeMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameDifficultyParam> DeathClockCampaignTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameDifficultyParam> AgressivenessIncrementationDelayModifierPerDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameDifficultyParam> StartingInfestationLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameDifficultyParam> ExtraDamageLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveModeParam> SaveModes;
    
    UDifficultyParametersDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyParam GetStartingInfestationLevelParameter(EnumMissionDifficulty _Difficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSaveModeParam GetSaveModeParameter(ESaveMode _SaveMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyParam GetPresetParameter(EnumMissionDifficulty _Difficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyParam GetExtraDamageParameter(EnumMissionDifficulty _Difficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyParam GetEnemyHealthParameter(EnumMissionDifficulty _Difficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyParam GetDetectionTimeParameter(EnumMissionDifficulty _Difficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyParam GetDeathClockParameter(EnumMissionDifficulty _Difficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyParam GetAgressivenessIncrementationDelayModifierPerDifficulties(EnumMissionDifficulty _Difficulty) const;
    
};

