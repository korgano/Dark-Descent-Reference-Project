#include "ActivityManager.h"
#include "Templates/SubclassOf.h"

UActivityManager::UActivityManager() {
    this->Character = NULL;
    this->bIsDisable = false;
}

void UActivityManager::StopAllNextActivities() {
}

void UActivityManager::StopAllActivities() {
}

void UActivityManager::SetIsDisable(bool _bIsDisable) {
}

void UActivityManager::SetCharacter(AASFCharacter* _Character) {
}

void UActivityManager::OnCharacterEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UActivityManager::OnCharacterDeath(AASFCharacter* _ActorKilled, const FDamageResultStruct& _DamageResult) {
}

void UActivityManager::OnActivityPaused(UActivity* _Activity, EnumActionStatus _Status) {
}

void UActivityManager::OnActivityEnded(UActivity* _Activity, EnumActionStatus _Status) {
}

void UActivityManager::InsertActivity(UActivity* _Activity, int32 _Position) {
}

void UActivityManager::InitializeActivityManager(AASFCharacter* _Character) {
}

bool UActivityManager::HasAnyCurrentActivityPrioritySupOrEqualThan(EnumActivityType _Type) {
    return false;
}

bool UActivityManager::HasAnyCurrentActivityPriorityLowerThan(EnumActivityType _Type) {
    return false;
}

bool UActivityManager::HasAnyActivity() {
    return false;
}

bool UActivityManager::HasActivityOfClass(TSubclassOf<UActivity> _ActivityClass) {
    return false;
}

UActivity* UActivityManager::GetCurrentActivity() {
    return NULL;
}

TArray<UActivity*> UActivityManager::GetActivityQueue() {
    return TArray<UActivity*>();
}

TArray<UActivity*> UActivityManager::GetActivityOfClass(TSubclassOf<UActivity> _ActivityClass) {
    return TArray<UActivity*>();
}

void UActivityManager::CheckNextActivity() {
}

void UActivityManager::AddActivity(UActivity* _Activity) {
}


