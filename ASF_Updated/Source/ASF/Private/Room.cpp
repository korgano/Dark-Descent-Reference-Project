#include "Room.h"
#include "CommonSaveLoadComponent.h"

ARoom::ARoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommonSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->DataAsset = NULL;
    this->AcknowsDataAsset = NULL;
    this->MainInteractionWidgetClass = NULL;
    this->bIsAvailable = false;
    this->bHasNewContent = false;
    this->SequenceMapper = NULL;
}

void ARoom::UpdateRoomActorsInteractivity(bool bDefault) {
}

void ARoom::SetHasNewContent(bool _HasNewContent) {
}

void ARoom::SetAvailable() {
}

void ARoom::Repair() {
}

void ARoom::RemoveNewAvailableUpgrade(FGameplayTag _UpgradeTag) {
}

void ARoom::PurchaseUpgrade(FGameplayTag _UpgradeTag) {
}

void ARoom::OverrideMarineListSorting(TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) const {
}

void ARoom::OnNewTurn_Event(AASFGameModeBase_BaseManagement* _GameMode, int32 _Turn) {
}

void ARoom::OnFeatureUnlocked(FGameplayTag _Tag) {
}

bool ARoom::HasSpecificEmployeeType() const {
    return false;
}

bool ARoom::HasAvailableUpgrade(bool _CheckAffordable) const {
    return false;
}

bool ARoom::HasAvailableEmployees(int32 _Count) const {
    return false;
}

void ARoom::GrantUpgrade(FGameplayTag _UpgradeTag) {
}

int32 ARoom::GetUpgradeLevelForActor(AActor* _UpgradeActor) const {
    return 0;
}

FGameplayTag ARoom::GetEmployeeType() const {
    return FGameplayTag{};
}

int32 ARoom::GetAvailableEmployees() const {
    return 0;
}

AActor* ARoom::GetActorForRoomUpgrade(FGameplayTag _UpgradeTag) const {
    return NULL;
}

void ARoom::EnterRoom() {
}

void ARoom::AddNewAvailableUpgrade(FGameplayTag _UpgradeTag) {
}


