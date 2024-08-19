#pragma once
#include "CoreMinimal.h"
#include "GameplayAction.h"
#include "GA_LoadMission.generated.h"

class ULevelPrimaryDataAsset;

UCLASS(Blueprintable)
class ASF_API UGA_LoadMission : public UGameplayAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelPrimaryDataAsset* LevelDataAsset;
    
    UGA_LoadMission();

    UFUNCTION(BlueprintCallable)
    void OnSaveGameUncompressed(bool _Success);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveGameCompressed(bool _Success);
    
    UFUNCTION(BlueprintCallable)
    void CompressCurrentMissionSaveGame();
    
};

