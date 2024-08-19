#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AchievementData.h"
#include "EAchievement.h"
#include "OnlineSubsystemGameInstance.generated.h"

UCLASS(Blueprintable)
class ASF_API UOnlineSubsystemGameInstance : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAchievementData> AchievementsQueuedToUnlock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAchievement, int32> AchievementTresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAchievement, FString> AchievementStatNames;
    
public:
    UOnlineSubsystemGameInstance();

    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(EAchievement AchievementEnum);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievementProgress(EAchievement AchievementEnum, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLC_Unlocked() const;
    
};

