#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameStateBase.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActorWithIDData.h"
#include "CharacterIDName.h"
#include "EMarineClassTier.h"
#include "EMarineRank.h"
#include "Event_ASFGameStateBase_AActorDelegate.h"
#include "Event_ASFGameStateBase_ASFCharacterDelegate.h"
#include "Event_ASFGameStateBase_BoolDelegate.h"
#include "Event_CodexDelegate.h"
#include "SavedActorInterface.h"
#include "WeaponData.h"
#include "ASFGameStateBase.generated.h"

class AASFCharacter;
class AActor;
class AHumanoid;
class AInfluenceMapManager;
class ARoomCluster;
class ASubLevelHandler;
class AVoiceManager;
class UAcknowsManagerComponent;
class UBM_ResearchProject_DataAsset;
class UCommonSaveLoadComponent;
class UDataTable;
class UDynamicTutorialManagerComponent;
class UFOWRevertedReaderManager;
class UInventoryComponent;
class UMarineAttributeDataAssets;
class UMarineClassDataAssets;
class UMark_Component;
class UObject;
class UUI_GlitchAnimation_DataAsset;
class UWeaponAttribute_DataAsset;

UCLASS(Blueprintable)
class ASF_API AASFGameStateBase : public AGameStateBase, public ISavedActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float ZFloor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameStateBase_Bool OnBlackFOWActivationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameStateBase_Bool OnDesaturationFOWActivationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFOWRevertedReaderManager* CurrentFOWReaderManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFOWRevertedReaderManager* FOWReaderManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UInventoryComponent*> Inventories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* FocusedMarine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NextMarineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MarineLevelingDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MarineClassesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMarineClassTier, int32> ClassTierUpgradeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMarineRank, int32> MarineRankUpgradeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MarineNamesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CommonAttributeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponsAttributesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResearchProjectsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UAcknowsManagerComponent* AcknowsManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVoiceManager* VoiceManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARoomCluster> RoomClusterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInfluenceMapManager> InfluenceManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMark_Component* Mark_Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* CommonSaveLoadComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameStateBase_ASFCharacter OnCharacterSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameStateBase_AActor OnActorWithCharacterIDSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameStateBase_AActor OnActorWithCharacterIDEndPlay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FCharacterIDName, FActorWithIDData> ActorWithIDSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnreadCodexEntries;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Codex OnUnreadCodexEntriesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicTutorialManagerComponent* DynamicTutorialManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUI_GlitchAnimation_DataAsset* GlitchAnimationDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissionBriefsPlayed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ASFDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastNow;
    
    AASFGameStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCharacterIDData(ASubLevelHandler* _SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void SetZFloor(float _NewZFloor);
    
    UFUNCTION(BlueprintCallable)
    void SetDesaturateFOWActive(bool _bIsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFOWReaderManager(UFOWRevertedReaderManager* _CurrentFOWReaderManager);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackFOWActive(bool _bIsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnSpeakerVoiceFinished(int32 _SpeakerID);
    
    UFUNCTION(BlueprintCallable)
    void OnCodexEntryUnlocked(FGameplayTag _EntryTag);
    
    UFUNCTION(BlueprintCallable)
    void OnCodexEntryRead(FGameplayTag _EntryTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarineRankUpgradeLevel(int32 _Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClassTierUpgradeLevel(int32 _Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCodexEntryRead(FGameplayTag _EntryTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FWeaponData> GetWeaponData(UWeaponAttribute_DataAsset* _WeaponAttribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetWeaponAttributesDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWeaponAttribute_DataAsset*> GetWeaponAttributesBySlot(FGameplayTag _WeaponSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWeaponAttribute_DataAsset*> GetWeaponAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMarineClassDataAssets* GetWeaponAttributeClassRestriction(FGameplayTag _AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponAttribute_DataAsset* GetWeaponAttributeByTrainingTag(FGameplayTag _WeaponTrainingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponAttribute_DataAsset* GetWeaponAttribute(FGameplayTag _AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetResearchProjectsDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBM_ResearchProject_DataAsset*> GetResearchProjects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBM_ResearchProject_DataAsset* GetResearchProject(FGameplayTag _ProjectTag) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextMarineIDForCreation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarineRankUpgradeLevel(EMarineRank _Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMarineRank GetMarineRank(int32 _Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetMarineNamesDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMarineNameInDataTable(const FString& MarineName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetMarineLevelingDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarineClassSquadMemberLimit(UMarineClassDataAssets* _Class, UMarineClassDataAssets*& _RestrictiveClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineAttributeDataAssets*> GetMarineClassPerksForRank(UMarineClassDataAssets* _Class, EMarineRank _Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineAttributeDataAssets*> GetMarineClassPerks(UMarineClassDataAssets* _Class, int32 _Level, bool _IncludeWeaponTrainings, bool _IncludeHidden) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetMarineClassesDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineClassDataAssets*> GetMarineClasses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMarineClassDataAssets* GetMarineClassAsset(FGameplayTag _ClassTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineClassDataAssets*> GetLowerTiersMarineClasses(UMarineClassDataAssets* _Class, bool bSortedByIncreasingTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInventoryComponent* GetInventoryForTeamWithContext(UObject* _Context, int32 _TeamIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetInventoryForTeam(int32 _TeamIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInventoryComponent* GetInventoryForCharacterWithContext(UObject* _Context, AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetInventoryForCharacter(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlitchAnimPlaybackSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlitchAnimInitialDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDynamicTutorialManagerComponent* GetDynamicTutorialManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDesaturationFOWActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTurn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFOWRevertedReaderManager* GetCurrentFOWReaderManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineAttributeDataAssets*> GetCommonAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetCommonAttributeDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMarineAttributeDataAssets* GetCommonAttribute(FGameplayTag _AttributeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBlackFOWActive() const;
    
    UFUNCTION(BlueprintCallable)
    FActorWithIDData GetActorWithIDSpawnedData(const FCharacterIDName& _CharacterIDName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAcknowsManagerComponent* GetAcknowsManagerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDynamicTutorialManagerComponent* FindDynamicTutorialManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool DoesActorWithIDSpawnedDataExist(const FCharacterIDName& _CharacterIDName);
    
    UFUNCTION(BlueprintCallable)
    void CharacterSpawnedBroadcast(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastActorWithCharacterIDSpawned(AActor* _Actor, const FCharacterIDName& _CharacterIDName);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastActorWithCharacterIDEndPlay(AActor* _Actor, const FCharacterIDName& _CharacterIDName);
    
    UFUNCTION(BlueprintCallable)
    void AddInventoryForTeam(UInventoryComponent* _Inventory, int32 _TeamIndex);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool SavedActorInterface_IsInitialized() override PURE_VIRTUAL(SavedActorInterface_IsInitialized, return false;);
    
    UFUNCTION()
    void SavedActorInterface_BindOnInitialized() override PURE_VIRTUAL(SavedActorInterface_BindOnInitialized,);
    
};

