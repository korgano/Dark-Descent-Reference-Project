#include "ASFGameStateBase.h"
#include "AcknowsManagerComponent.h"
#include "CommonSaveLoadComponent.h"
#include "Mark_Component.h"

AASFGameStateBase::AASFGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZFloor = 0.00f;
    this->CurrentFOWReaderManager = NULL;
    this->FOWReaderManager = NULL;
    this->CurrentTurn = 0;
    this->FocusedMarine = NULL;
    this->NextMarineID = 0;
    this->MarineLevelingDataTable = NULL;
    this->MarineClassesDataTable = NULL;
    this->MarineNamesDataTable = NULL;
    this->CommonAttributeDataTable = NULL;
    this->WeaponsAttributesDataTable = NULL;
    this->ResearchProjectsDataTable = NULL;
    this->AcknowsManagerComponent = CreateDefaultSubobject<UAcknowsManagerComponent>(TEXT("AcknowsManagerComponent"));
    this->VoiceManager = NULL;
    this->Mark_Component = CreateDefaultSubobject<UMark_Component>(TEXT("Mark_Component"));
    this->CommonSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->DynamicTutorialManagerComponent = NULL;
    this->GlitchAnimationDataAsset = NULL;
    this->ASFDeltaTime = 0.00f;
}

void AASFGameStateBase::UpdateCharacterIDData(ASubLevelHandler* _SubLevelHandler) {
}

void AASFGameStateBase::SetZFloor(float _NewZFloor) {
}

void AASFGameStateBase::SetDesaturateFOWActive(bool _bIsActive) {
}

void AASFGameStateBase::SetCurrentFOWReaderManager(UFOWRevertedReaderManager* _CurrentFOWReaderManager) {
}

void AASFGameStateBase::SetBlackFOWActive(bool _bIsActive) {
}

void AASFGameStateBase::OnSpeakerVoiceFinished(int32 _SpeakerID) {
}

void AASFGameStateBase::OnCodexEntryUnlocked(FGameplayTag _EntryTag) {
}

void AASFGameStateBase::OnCodexEntryRead(FGameplayTag _EntryTag) {
}

bool AASFGameStateBase::IsMarineRankUpgradeLevel(int32 _Level) const {
    return false;
}

bool AASFGameStateBase::IsClassTierUpgradeLevel(int32 _Level) const {
    return false;
}

bool AASFGameStateBase::HasCodexEntryRead(FGameplayTag _EntryTag) const {
    return false;
}


UDataTable* AASFGameStateBase::GetWeaponAttributesDataTable() const {
    return NULL;
}

TArray<UWeaponAttribute_DataAsset*> AASFGameStateBase::GetWeaponAttributesBySlot(FGameplayTag _WeaponSlot) const {
    return TArray<UWeaponAttribute_DataAsset*>();
}

TArray<UWeaponAttribute_DataAsset*> AASFGameStateBase::GetWeaponAttributes() const {
    return TArray<UWeaponAttribute_DataAsset*>();
}

UMarineClassDataAssets* AASFGameStateBase::GetWeaponAttributeClassRestriction(FGameplayTag _AttributeTag) const {
    return NULL;
}

UWeaponAttribute_DataAsset* AASFGameStateBase::GetWeaponAttributeByTrainingTag(FGameplayTag _WeaponTrainingTag) const {
    return NULL;
}

UWeaponAttribute_DataAsset* AASFGameStateBase::GetWeaponAttribute(FGameplayTag _AttributeTag) const {
    return NULL;
}

UDataTable* AASFGameStateBase::GetResearchProjectsDataTable() const {
    return NULL;
}

TArray<UBM_ResearchProject_DataAsset*> AASFGameStateBase::GetResearchProjects() const {
    return TArray<UBM_ResearchProject_DataAsset*>();
}

UBM_ResearchProject_DataAsset* AASFGameStateBase::GetResearchProject(FGameplayTag _ProjectTag) const {
    return NULL;
}

int32 AASFGameStateBase::GetNextMarineIDForCreation() {
    return 0;
}

int32 AASFGameStateBase::GetMarineRankUpgradeLevel(EMarineRank _Rank) const {
    return 0;
}

EMarineRank AASFGameStateBase::GetMarineRank(int32 _Level) const {
    return EMarineRank::ROOKIE;
}

UDataTable* AASFGameStateBase::GetMarineNamesDataTable() const {
    return NULL;
}

FString AASFGameStateBase::GetMarineNameInDataTable(const FString& MarineName) const {
    return TEXT("");
}

UDataTable* AASFGameStateBase::GetMarineLevelingDataTable() const {
    return NULL;
}

int32 AASFGameStateBase::GetMarineClassSquadMemberLimit(UMarineClassDataAssets* _Class, UMarineClassDataAssets*& _RestrictiveClass) const {
    return 0;
}

TArray<UMarineAttributeDataAssets*> AASFGameStateBase::GetMarineClassPerksForRank(UMarineClassDataAssets* _Class, EMarineRank _Rank) const {
    return TArray<UMarineAttributeDataAssets*>();
}

TArray<UMarineAttributeDataAssets*> AASFGameStateBase::GetMarineClassPerks(UMarineClassDataAssets* _Class, int32 _Level, bool _IncludeWeaponTrainings, bool _IncludeHidden) const {
    return TArray<UMarineAttributeDataAssets*>();
}

UDataTable* AASFGameStateBase::GetMarineClassesDataTable() const {
    return NULL;
}

TArray<UMarineClassDataAssets*> AASFGameStateBase::GetMarineClasses() const {
    return TArray<UMarineClassDataAssets*>();
}

UMarineClassDataAssets* AASFGameStateBase::GetMarineClassAsset(FGameplayTag _ClassTag) const {
    return NULL;
}

TArray<UMarineClassDataAssets*> AASFGameStateBase::GetLowerTiersMarineClasses(UMarineClassDataAssets* _Class, bool bSortedByIncreasingTier) const {
    return TArray<UMarineClassDataAssets*>();
}

UInventoryComponent* AASFGameStateBase::GetInventoryForTeamWithContext(UObject* _Context, int32 _TeamIndex) {
    return NULL;
}

UInventoryComponent* AASFGameStateBase::GetInventoryForTeam(int32 _TeamIndex) {
    return NULL;
}

UInventoryComponent* AASFGameStateBase::GetInventoryForCharacterWithContext(UObject* _Context, AASFCharacter* _Character) {
    return NULL;
}

UInventoryComponent* AASFGameStateBase::GetInventoryForCharacter(AASFCharacter* _Character) {
    return NULL;
}

float AASFGameStateBase::GetGlitchAnimPlaybackSpeed() const {
    return 0.0f;
}

float AASFGameStateBase::GetGlitchAnimInitialDelay() const {
    return 0.0f;
}

UDynamicTutorialManagerComponent* AASFGameStateBase::GetDynamicTutorialManager() const {
    return NULL;
}

bool AASFGameStateBase::GetDesaturationFOWActive() const {
    return false;
}

int32 AASFGameStateBase::GetCurrentTurn() const {
    return 0;
}

UFOWRevertedReaderManager* AASFGameStateBase::GetCurrentFOWReaderManager() const {
    return NULL;
}

TArray<UMarineAttributeDataAssets*> AASFGameStateBase::GetCommonAttributes() const {
    return TArray<UMarineAttributeDataAssets*>();
}

UDataTable* AASFGameStateBase::GetCommonAttributeDataTable() const {
    return NULL;
}

UMarineAttributeDataAssets* AASFGameStateBase::GetCommonAttribute(FGameplayTag _AttributeTag) const {
    return NULL;
}

bool AASFGameStateBase::GetBlackFOWActive() const {
    return false;
}

FActorWithIDData AASFGameStateBase::GetActorWithIDSpawnedData(const FCharacterIDName& _CharacterIDName) {
    return FActorWithIDData{};
}

UAcknowsManagerComponent* AASFGameStateBase::GetAcknowsManagerComponent() const {
    return NULL;
}

UDynamicTutorialManagerComponent* AASFGameStateBase::FindDynamicTutorialManager(UObject* WorldContextObject) {
    return NULL;
}

bool AASFGameStateBase::DoesActorWithIDSpawnedDataExist(const FCharacterIDName& _CharacterIDName) {
    return false;
}

void AASFGameStateBase::CharacterSpawnedBroadcast(AASFCharacter* _Character) {
}

void AASFGameStateBase::BroadcastActorWithCharacterIDSpawned(AActor* _Actor, const FCharacterIDName& _CharacterIDName) {
}

void AASFGameStateBase::BroadcastActorWithCharacterIDEndPlay(AActor* _Actor, const FCharacterIDName& _CharacterIDName) {
}

void AASFGameStateBase::AddInventoryForTeam(UInventoryComponent* _Inventory, int32 _TeamIndex) {
}


