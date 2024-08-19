#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ChunkInstallProgressEventDelegate.h"
#include "ChunkInstalledEventDelegate.h"
#include "CodexCategory.h"
#include "CodexEntries.h"
#include "CodexEntry.h"
#include "DLCInstalledEventDelegate.h"
#include "EActivityQuickLaunch.h"
#include "ECampaignLaunchMode.h"
#include "EEndActivityStatus.h"
#include "ELoadingTipCategory.h"
#include "EWaitingPopUpButton.h"
#include "LoadingTip.h"
#include "MissionResources.h"
#include "OnLoadFrontEndMapDelegate.h"
#include "Templates/SubclassOf.h"
#include "ViewportResizeEventDelegate.h"
#include "ASFGameInstance.generated.h"

class UCampaignProgressDataAsset;
class UCursorKeyboardrWidget;
class UDataPad_DataAsset;
class UDataTable;
class UDifficultyParametersDataAsset;
class UEnum;
class ULevelPrimaryDataAsset;
class USkill_DataAsset;
class USoundCue;
class USubLevelPrimaryDataAsset;
class UUserWidget;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class ASF_API UASFGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WelcomeScreenMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainMenuMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OtagoMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrologueMap;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChunkInstalledEvent OnChunkInstalled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadFrontEndMap OnLoadFrontEndMapCalled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChunkInstallProgressEvent OnChunkInstallProgress;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, USoundCue*> PreloadedSoundAssets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> LoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WelcomeMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DialogWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WaitingWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewportResizeEvent OnViewportResized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelPrimaryDataAsset*> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MissionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMissionResources> MissionResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MissionAverageDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UDataTable*> UserSettingsDataTables;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WaterkMarkWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfigValueNoWaterMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedMissionObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedSupplies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedFoes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedInterludes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedFeatures;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkillsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCodexCategory> CodexCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultyParametersDataAsset* DifficultyParametersDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCampaignProgressDataAsset* CampaignProgressDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadingTipsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LocalizedEnumsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedRunTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityQuickLaunch ActivityQuickLaunch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDLCInstalledEvent OnDLCInstalled;
    
    UASFGameInstance();

    UFUNCTION(BlueprintCallable)
    void SwitchUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartActivity(const FString& ActivityId) const;
    
    UFUNCTION(BlueprintCallable)
    void ShowWaitingPopUp(const FString& MapName, EWaitingPopUpButton Button);
    
    UFUNCTION(BlueprintCallable)
    void ShowLoadingScreen(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCursorKeyboardrWidget(UCursorKeyboardrWidget* Cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetActivityAvailability(const FString& ActivityId, bool bAvailable) const;
    
    UFUNCTION(BlueprintCallable)
    void ReturnToWelcomeScreen();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToOtago();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void ResetUserSettings(FGameplayTag _SettingsDataTableTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ResetAllActivities() const;
    
    UFUNCTION(BlueprintCallable)
    void OnUserSettingsInitialized(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUserSettingIntValueChanged(FGameplayTag _SettingTag, int32 _Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUserSettingFloatValueChanged(FGameplayTag _SettingTag, float _Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUserSettingByteValueChanged(FGameplayTag _SettingTag, uint8 _Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUserSettingBoolValueChanged(FGameplayTag _SettingTag, bool _Value);
    
    UFUNCTION(BlueprintCallable)
    void LoadOtago(const FString& _Option);
    
    UFUNCTION(BlueprintCallable)
    void LoadMission(const FString& MapName, const FString& Options, bool bShowLoadingScreen);
    
    UFUNCTION(BlueprintCallable)
    void LoadFirstMission(ECampaignLaunchMode _LaunchMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitAudioSettings();
    
    UFUNCTION(BlueprintCallable)
    void HideLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    bool HasMapInstalled(const FString& _MapName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetXenoTechProjectMissionTag(FGameplayTag _ProjectTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUserIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USubLevelPrimaryDataAsset* GetSubLevelDataAsset(FName LevelName, FName SubLevelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill_DataAsset* GetSkillDataAsset(FGameplayTag _SkillTag) const;
    
    UFUNCTION(BlueprintCallable)
    float GetMissionAverageDuration(FGameplayTag _MissionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocalizedEnumValue(UEnum* _Enum, uint8 _Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetLoadingTipsDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLoadingTip> GetLoadingTips(ELoadingTipCategory _Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelPrimaryDataAsset* GetLevelDataAssetWithMapName(const FString& _MapName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelPrimaryDataAsset* GetLevelDataAssetByTag(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelPrimaryDataAsset* GetLevelDataAsset(FName LevelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLastMissionTag(FName LevelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionTimeMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeathClockCampaignTurns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetDatapadTagFromAsset(UDataPad_DataAsset* _Asset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UCursorKeyboardrWidget* GetCursorKeyboardrWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelPrimaryDataAsset* GetCurrentLevelDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCodexEntry GetCodexEntry(FGameplayTag _EntryTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCodexEntries GetCodexEntriesWithMissionTag(FGameplayTag _CategoryTag, FGameplayTag _MissionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllLockedFeaturesAtStart(FGameplayTagContainer& LockedFeaturesAtStart) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAgressivenessIncrementationDelayModifierPerDifficulties() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishLoadMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EndActivity(const FString& ActivityId, EEndActivityStatus ActivityStatus) const;
    
    UFUNCTION(BlueprintCallable)
    void DisplayLoadingScreen(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConsoleCommandExecution(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    void CompleteAccessibilityScreen();
    
};

