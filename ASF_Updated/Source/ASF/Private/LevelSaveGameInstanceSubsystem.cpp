#include "LevelSaveGameInstanceSubsystem.h"

ULevelSaveGameInstanceSubsystem::ULevelSaveGameInstanceSubsystem() {
    this->CampaignSlotSelected = 0;
    this->CampaignSlotHovered = 0;
    this->UseCompressedSave = false;
}

void ULevelSaveGameInstanceSubsystem::UncompressSaveGames(TMap<FName, bool>& _SavesToUncompress) {
}

void ULevelSaveGameInstanceSubsystem::SetLevelSaveGames(const TMap<FName, USaveGame*>& _LevelSaveGames) {
}

void ULevelSaveGameInstanceSubsystem::SetCampaignSlotSelected(int32 _CampainSlotId) {
}

void ULevelSaveGameInstanceSubsystem::SetCampaignSlotHovered(int32 _CampainSlotId) {
}

void ULevelSaveGameInstanceSubsystem::SaveGameAsync(const FString& _SaveName) {
}

void ULevelSaveGameInstanceSubsystem::RemoveSaveGame(const FString& _SaveName) {
}

void ULevelSaveGameInstanceSubsystem::RemovePrologueSaveGame() {
}

void ULevelSaveGameInstanceSubsystem::RemoveLevelSaveGames(const TArray<FName>& _LevelSaveNames) {
}

void ULevelSaveGameInstanceSubsystem::RemoveCompressedLevelSaveGame(FName _LevelSaveName) {
}

bool ULevelSaveGameInstanceSubsystem::ReadPropertyAsVector2D(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, FVector2D& _ReturnValue) {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::ReadPropertyAsSubLevelConnectorComponentStructArray(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, TArray<FSubLevelConnectorComponentStruct>& _ReturnValue) {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::ReadPropertyAsString(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, FString& _ReturnValue) {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::ReadPropertyAsInt(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, int32& _ReturnValue) {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::ReadPropertyAsDataAsset(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, UPrimaryDataAsset*& _ReturnValue) {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::ReadPropertyAsBool(UObject* _WorldContext, ULevelSaveGame* _SaveGame, FLevelDynamicObjectSaveStruct _DynamicObjectSaveStruct, const TSoftClassPtr<UObject>& _ObjectClass, FName _ObjectName, FName _ComponentName, FName _PropertyName, bool& _ReturnValue) {
    return false;
}

void ULevelSaveGameInstanceSubsystem::OnAllSavesLoaded() {
}

void ULevelSaveGameInstanceSubsystem::LoadSaveAsync(const FString& _SaveName, UMetaDataSaveGame_v1* _MetaDataSaveGame) {
}

void ULevelSaveGameInstanceSubsystem::LoadSave(const FString& _SaveName, UMetaDataSaveGame_v1* _MetaDataSaveGame) {
}

void ULevelSaveGameInstanceSubsystem::LoadMetaDataSaveGame(const FString& SaveName, USaveGame* SaveData, TArray<FCampaignSaveSlot>& OutCampaignSlots) {
}

bool ULevelSaveGameInstanceSubsystem::IsValidCampaignSlot(int32 _Index) const {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::IsTacticalMissionLoaded() {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::IsAnySaveSlotUsed() const {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::HasSavesInCampaignSlotSelected() {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::HasPS4CampaignSlots() {
    return false;
}

bool ULevelSaveGameInstanceSubsystem::HasCampaignSlotSelected() {
    return false;
}

FText ULevelSaveGameInstanceSubsystem::GetSaveGameDisplayName(const FMetaDataSaveStruct& MetaDataSaveGame) {
    return FText::GetEmpty();
}

TArray<FCampaignSaveSlot> ULevelSaveGameInstanceSubsystem::GetPS4CampaignSlots() {
    return TArray<FCampaignSaveSlot>();
}

void ULevelSaveGameInstanceSubsystem::GetOpenDataProperties(const FLevelOpenDataSaveStruct& _OpenData, UMapFeedbackDataProperties*& OpenDataProperties, UObject* _Owner) const {
}

int32 ULevelSaveGameInstanceSubsystem::GetMostRecentCampaignSlot() {
    return 0;
}

UMetaDataSaveGame_v1* ULevelSaveGameInstanceSubsystem::GetMetaDataSaveGame() {
    return NULL;
}

TSoftClassPtr<UMapFeedbackDataProperties> ULevelSaveGameInstanceSubsystem::GetMapFeedbackPropertiesClass(UClass* _ObjectClass, UObject* _Owner) const {
    return NULL;
}

void ULevelSaveGameInstanceSubsystem::GetLevelSaveGames(TMap<FName, USaveGame*>& _LevelSaveGames) {
}

ULevelSaveGame* ULevelSaveGameInstanceSubsystem::GetLevelSaveGame(FName LevelName) {
    return NULL;
}

FMetaDataSaveStruct ULevelSaveGameInstanceSubsystem::GetLastSaveMetaData() {
    return FMetaDataSaveStruct{};
}

FString ULevelSaveGameInstanceSubsystem::GetLastSave() {
    return TEXT("");
}

int32 ULevelSaveGameInstanceSubsystem::GetLastCampaignSave() {
    return 0;
}

void ULevelSaveGameInstanceSubsystem::GetDynamicObjectProperties(const FLevelDynamicObjectSaveStruct& _DynamicObject, UMapFeedbackDataProperties*& OpenDataProperties) const {
}

ULevelSaveGame* ULevelSaveGameInstanceSubsystem::GetCurrentLevelSaveGame() {
    return NULL;
}

int32 ULevelSaveGameInstanceSubsystem::GetCampaignSlotSelected() {
    return 0;
}

FCampaignSaveSlot ULevelSaveGameInstanceSubsystem::GetCampaignSlot(int32 _Index) {
    return FCampaignSaveSlot{};
}

UCampaignSaveGame* ULevelSaveGameInstanceSubsystem::GetCampaignSaveGame() {
    return NULL;
}

bool ULevelSaveGameInstanceSubsystem::GetCampaignDifficultyParameter(FCampaignParameters& _CampaignParameters) {
    return false;
}

TArray<FString> ULevelSaveGameInstanceSubsystem::GetAllSaveNamesWithTypeFromSlot(const TArray<ESaveGameType>& _SaveGameTypes, int32 _Slot) {
    return TArray<FString>();
}

TArray<FString> ULevelSaveGameInstanceSubsystem::GetAllSaveNamesWithType(const TArray<ESaveGameType>& _SaveGameTypes) {
    return TArray<FString>();
}

void ULevelSaveGameInstanceSubsystem::GetAllMetaDataSaveGames(TArray<FMetaDataSaveStruct>& MetaDataSaveGames) {
}

void ULevelSaveGameInstanceSubsystem::GenerateLevelOpenData() {
}

bool ULevelSaveGameInstanceSubsystem::DoesSaveGameExist(const FString& _SaveName) {
    return false;
}

void ULevelSaveGameInstanceSubsystem::DeleteCampaignSlot(int32 _Index, bool bDoBroadcast) {
}

void ULevelSaveGameInstanceSubsystem::DeleteAllAutoSave() {
}

void ULevelSaveGameInstanceSubsystem::CreateCampaignSlotMetaData(int32 _Index, FCampaignParameters _Params) {
}

UCampaignSaveGame* ULevelSaveGameInstanceSubsystem::CreateCampaignSaveGame() {
    return NULL;
}

void ULevelSaveGameInstanceSubsystem::CompressSaveGames(const TMap<FName, bool>& _SavesToCompress) {
}

FLevelSaveStruct ULevelSaveGameInstanceSubsystem::CombineSaveGameAndGenericSave(ULevelSaveGame* SaveGame, FName _MissionName) {
    return FLevelSaveStruct{};
}

void ULevelSaveGameInstanceSubsystem::ClearSaveGames() {
}

void ULevelSaveGameInstanceSubsystem::ClearLevelOpenData() {
}

void ULevelSaveGameInstanceSubsystem::AsyncPS4SaveImport() {
}

void ULevelSaveGameInstanceSubsystem::AsyncLoadPS4Slots() {
}

void ULevelSaveGameInstanceSubsystem::AsyncLoadMetaDataSaveGame(const int32 UserIndex) {
}

void ULevelSaveGameInstanceSubsystem::AsyncLoadAllMetaDataSaveGame() {
}

void ULevelSaveGameInstanceSubsystem::AsyncImportPS4Slot(int32 PS4CampaignSlotIndex, int32 PS5CampaignSlotIndex) {
}

void ULevelSaveGameInstanceSubsystem::AddToLevelSaveGames(const FName _SaveName, USaveGame* _LevelSaveGame) {
}

void ULevelSaveGameInstanceSubsystem::AddToCompressedLevelSaveGames(const FName _SaveName, FCompressedLevelSaveGame& _LevelSaveData) {
}


