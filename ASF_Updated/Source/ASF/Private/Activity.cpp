#include "Activity.h"
#include "Templates/SubclassOf.h"

UActivity::UActivity() {
    this->ActivityType = EnumActivityType::INTERRUPTION;
    this->ActivityStatus = EnumActionStatus::CREATED;
    this->bUseAnimationReady = false;
    this->bForceOwnerRender = true;
    this->Character = NULL;
    this->AnimationType = EActivityAnimationType::NONE;
    this->World = NULL;
    this->EffectApplied = NULL;
}

bool UActivity::UseAnimationReady() {
    return false;
}

void UActivity::TickActivity_Implementation(float _DeltaTime) {
}

void UActivity::StartAnim_Implementation() {
}

void UActivity::StartActivity_Implementation() {
}

void UActivity::SetCharacter(AASFCharacter* _Character) {
}

void UActivity::SetAnimationType(EActivityAnimationType _AnimationType) {
}

void UActivity::ResumeActivity_Implementation() {
}

void UActivity::RemoveActivityEffect() {
}

void UActivity::PauseActivity_Implementation() {
}

bool UActivity::IsCharacterOrientation_Desired_Valid() {
    return false;
}

bool UActivity::IsCancelledWhenInterrupt_Implementation(UActivity* InteruptingActivity) {
    return false;
}

void UActivity::InitActivity_Implementation() {
}

FGameplayTagContainer UActivity::GetPerceptionEnabled() const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UActivity::GetPerceptionDisabled() const {
    return FGameplayTagContainer{};
}

FVector UActivity::GetCharacterOrientation_Desired_Implementation() {
    return FVector{};
}

FVector UActivity::GetCharacterAimingLocation_Desired_Implementation() {
    return FVector{};
}

AASFCharacter* UActivity::GetCharacter() const {
    return NULL;
}

bool UActivity::GetbForceOwnerRender() const {
    return false;
}

EActivityAnimationType UActivity::GetAnimationType() {
    return EActivityAnimationType::NONE;
}

EnumActivityType UActivity::GetActivityType() const {
    return EnumActivityType::INTERRUPTION;
}

EnumActionStatus UActivity::GetActivityStatus() const {
    return EnumActionStatus::CREATED;
}

int32 UActivity::GetActivityPriority() const {
    return 0;
}

void UActivity::EndAnim_Implementation() {
}

void UActivity::EndActivity_Implementation(EnumActionStatus _Status) {
}

UActivity* UActivity::Create_Activity_BP(TSubclassOf<UActivity> _Activity_Type, AActor* _Instigator) {
    return NULL;
}

bool UActivity::CharacterAimingLocation_Desired_Valid() {
    return false;
}

void UActivity::AskEndActivity_Implementation(EnumActionStatus _Status) {
}

void UActivity::AddActivityEffect() {
}


