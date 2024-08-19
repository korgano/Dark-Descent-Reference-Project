#include "InteractiveComponent.h"
#include "Templates/SubclassOf.h"

UInteractiveComponent::UInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNoProgressBar = false;
    this->bUseAutoTimer = true;
    this->bIsNarrative = false;
    this->bForceNarrativeAtFalseAfterSuccess = false;
    this->bForceDisplayButton = true;
    this->bShowPhaseWarningBeforeInteract = false;
    this->DisplayPriority = 0;
    this->bMarinesNeedToBeInSameRoom = false;
    this->DataAsset = NULL;
    this->bIsInteractionActive = true;
    this->bBlockByTutorial = false;
    this->OverlayWidgetComponent = NULL;
    this->Grip = NULL;
    this->Instigator = NULL;
    this->LastInteractor = NULL;
    this->GameTimeAtInteractionStart = 0.00f;
    this->bStartNarrativeDialogueAlreadyPlayed = false;
    this->bFinishNarrativeDialogueAlreadyPlayed = false;
    this->ForceCallSelfGetBestMarineForInteraction = false;
    this->Sound_Interaction = NULL;
    this->TwinActorInteractiveComponent = NULL;
}

void UInteractiveComponent::UnbindPrerequisitesCheck() {
}

void UInteractiveComponent::TryToTriggerTriggerInfo(EnumActionStatus _InteractionStatus, bool bForSave) {
}

bool UInteractiveComponent::SquadIsInSameRoom(ASquad* _Squad) {
    return false;
}

TArray<UInteractiveComponent*> UInteractiveComponent::SortByDisplayPriority(const TArray<UInteractiveComponent*>& _Components) {
    return TArray<UInteractiveComponent*>();
}

void UInteractiveComponent::SetTwinActorInteractiveComponent(UInteractiveComponent* _TwinActorInteractiveComponent) {
}

void UInteractiveComponent::SetIsInteractionNarrative(bool _isNarrative) {
}

void UInteractiveComponent::SetIsInteractionActive(bool _isActive) {
}

void UInteractiveComponent::SetInstigator(AHumanoidTactical* _Instigator) {
}

void UInteractiveComponent::SetHovered_Implementation(bool bIsHovered) {
}

void UInteractiveComponent::SetGrip(AGrip* _Grip) {
}

void UInteractiveComponent::SetForceNarrativeAtFalseAfterSuccess(bool _ForceNarrativeAtFalseAfterSuccess) {
}

void UInteractiveComponent::SetForcedCharacterToInteract(FCharacterIDName ForcedCharacter) {
}

void UInteractiveComponent::SetBlockBytutorial(bool _bNewBlock) {
}

AHumanoidTactical* UInteractiveComponent::SelectPreviousHumanoidToInteract(ASquad* _Squad, bool _Run) {
    return NULL;
}

AHumanoidTactical* UInteractiveComponent::SelectNextHumanoidToInteract(ASquad* _Squad, bool _Run) {
    return NULL;
}

void UInteractiveComponent::SelectInteraction_Implementation(UInteractiveComponent* _InteractionSelected, bool _Run, bool _Influenced) {
}

AHumanoidTactical* UInteractiveComponent::SelectHumanoidToInteract(ASquad* _Squad, bool _Run) {
    return NULL;
}

void UInteractiveComponent::ReserveSuppliesIfNeeded_Implementation(ASquad* _Squad) {
}

void UInteractiveComponent::ReleaseSuppliesIfNeeded_Implementation(ASquad* _Squad) {
}

void UInteractiveComponent::PlaySound_EndWithSuccess() {
}

void UInteractiveComponent::PlayNarrativeDialogue(const FAcknowsSequence& _NarrativeDialogue) {
}

void UInteractiveComponent::PlayInteractionStartAcknow(AHumanoid* _ActionPerformer) {
}

void UInteractiveComponent::PlayInteractionCommandAcknow(AHumanoid* _ActionPerformer) {
}

void UInteractiveComponent::PlayInteraction_Implementation() {
}

bool UInteractiveComponent::OpenInteractions(bool _Run) {
    return false;
}

void UInteractiveComponent::OnInteractionCompleted_Implementation() {
}

void UInteractiveComponent::OnAlienPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

bool UInteractiveComponent::IsQuickInteraction(UInteractiveComponent*& QuickInteraction) {
    return false;
}

bool UInteractiveComponent::IsObjectReserved(AActor* _InteractionOwner) {
    return false;
}

bool UInteractiveComponent::IsInteractionAvailable_Implementation(ASquad* _Squad) {
    return false;
}

bool UInteractiveComponent::IsInteractionAllowed_Implementation(ASquad* _Squad, FGameplayTagContainer& ErrorReasons, bool _TestBeforeInteraction) {
    return false;
}

bool UInteractiveComponent::IsDiplomaticallyAvailable_Implementation(AActor* _Actor) {
    return false;
}

bool UInteractiveComponent::IsCharacterAbleToInteract_Implementation(AHumanoidTactical* HumanoidTactical, FGameplayTagContainer& ErrorReasons) {
    return false;
}

bool UInteractiveComponent::IsAtLeastOneCharacterAbleToInteract(ASquad* _Squad) {
    return false;
}

bool UInteractiveComponent::InstigatorSquadIsInSameRoom() {
    return false;
}

void UInteractiveComponent::HoveredStateChanged(bool _Hovered) {
}

bool UInteractiveComponent::HasEnoughSpaceInInventory_Implementation(ASquad* _Squad) {
    return false;
}

bool UInteractiveComponent::HasAvailableNeededSupplies_Implementation(ASquad* _Squad) {
    return false;
}

bool UInteractiveComponent::HasAtLeastOneInteractionAvailable(AActor* _Owner) {
    return false;
}

UInteractiveComponent* UInteractiveComponent::GetTrueActorInteractiveComponent(AGameplayTwinActor* _TwinActor) {
    return NULL;
}

TSoftClassPtr<UActivity> UInteractiveComponent::GetSwapActivity_Implementation() {
    return NULL;
}

void UInteractiveComponent::GetResourceNeeded_Implementation(FGameplayTag& _Tag, int32& nb) {
}

void UInteractiveComponent::GetResourceGiven_Implementation(FGameplayTag& _Tag, int32& nb) {
}

float UInteractiveComponent::GetRemainingInteractionDurationForCharacter_Implementation(AHumanoidTactical* HumanoidTactical) {
    return 0.0f;
}

UInteractiveComponent* UInteractiveComponent::GetQuickInteraction() {
    return NULL;
}

void UInteractiveComponent::GetPotentialSelectableHumanoidToInteract(TArray<AHumanoidTactical*>& _Res, ASquad* _Squad) {
}

UObject* UInteractiveComponent::GetObjectInstigator(AActor* _InteractionOwner) {
    return NULL;
}

bool UInteractiveComponent::GetNeedToBeEmptyHanded() {
    return false;
}

FText UInteractiveComponent::GetName_Implementation() const {
    return FText::GetEmpty();
}

FSegment UInteractiveComponent::GetLocationDataForInteraction_Implementation(AHumanoidTactical* _AHumanoidTactical) {
    return FSegment{};
}

AHumanoidTactical* UInteractiveComponent::GetLastInteractor() const {
    return NULL;
}

FGameplayTagContainer UInteractiveComponent::GetItemNeeded() {
    return FGameplayTagContainer{};
}

bool UInteractiveComponent::GetIsInteractionNarrative() {
    return false;
}

bool UInteractiveComponent::GetIsInteractionActive() {
    return false;
}

float UInteractiveComponent::GetInteractionHumanoidMalus_Implementation(AHumanoidTactical* _HumanoidTactical) {
    return 0.0f;
}

void UInteractiveComponent::GetInteractionErrors(ASquad* _Squad, TMap<AActor*, FGameplayTagContainer>& ErrorTagContairers) {
}

float UInteractiveComponent::GetInteractionDurationForCharacter_Implementation(AHumanoidTactical* HumanoidTactical) {
    return 0.0f;
}

float UInteractiveComponent::GetInteractionDuration_Implementation() {
    return 0.0f;
}

AHumanoidTactical* UInteractiveComponent::GetInstigator() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UInteractiveComponent::GetIcon_Implementation() const {
    return NULL;
}

AGrip* UInteractiveComponent::GetGrip() const {
    return NULL;
}

FSegment UInteractiveComponent::GetDisplayLocationDataForInteraction_Implementation(AHumanoidTactical* _AHumanoidTactical) {
    return FSegment{};
}

FText UInteractiveComponent::GetDescription() const {
    return FText::GetEmpty();
}

UInteractionPrimaryDataAsset* UInteractiveComponent::GetDataAssetCastTo(TSubclassOf<UInteractionPrimaryDataAsset> ClassToCastInto) const {
    return NULL;
}

UInteractionPrimaryDataAsset* UInteractiveComponent::GetDataAsset() {
    return NULL;
}

FVector UInteractiveComponent::GetCharacterOrientation_Desired_Implementation() {
    return FVector{};
}

AHumanoidTactical* UInteractiveComponent::GetBestMarineForInteraction_Implementation(TArray<AHumanoidTactical*>& PossibleMarines) {
    return NULL;
}

TArray<UInteractiveComponent*> UInteractiveComponent::GetAvailableInteractiveComponent(AActor* _Actor, ASquad* _Squad) {
    return TArray<UInteractiveComponent*>();
}

TArray<UActorComponent*> UInteractiveComponent::GetArrowsForInteraction_Implementation() {
    return TArray<UActorComponent*>();
}

TArray<FSegment> UInteractiveComponent::GetAllPossibleLocationsForInteraction_Implementation(AHumanoidTactical* _AHumanoidTactical) {
    return TArray<FSegment>();
}

UAction_Interaction* UInteractiveComponent::GenerateInteraction_Implementation(AActor* _Actor, bool _Run, bool _Influenced) {
    return NULL;
}

TArray<UInteractiveComponent*> UInteractiveComponent::FilterByInteractionAvailable(ASquad* _Squad, const TArray<UInteractiveComponent*>& _Components) {
    return TArray<UInteractiveComponent*>();
}

void UInteractiveComponent::EndInteraction(EnumActionStatus _InteractionStatus) {
}

bool UInteractiveComponent::DoesNeedSupplies_Implementation() {
    return false;
}

bool UInteractiveComponent::DoesGiveSupplies_Implementation() {
    return false;
}

void UInteractiveComponent::ConsumeSuppliesIfNeeded_Implementation(ASquad* _Squad) {
}

void UInteractiveComponent::ClearGoingToNarrativeInteractionEffect() {
}

void UInteractiveComponent::CheckPrerequisites(UTinda_EffectHandlerComponent* _EffectHandler, UTinda_Effect* _Effect) {
}

bool UInteractiveComponent::CanMarineBeCommandedToInteract(AHumanoidTactical* _HumanoidTactical, FGameplayTagContainer& ErrorReasons) {
    return false;
}

bool UInteractiveComponent::CancelObjectInstigator(AActor* _InteractionOwner, bool _EvenIfInteractionStarted) {
    return false;
}

void UInteractiveComponent::BroadcastOpenInteraction(const TArray<UInteractiveComponent*>& Components) {
}

void UInteractiveComponent::BindForPrerequisitesCheck() {
}

void UInteractiveComponent::ActionSuccess_Implementation() {
}

void UInteractiveComponent::ActionPause_Implementation() {
}

void UInteractiveComponent::ActionOnGoing_Implementation() {
}

void UInteractiveComponent::ActionFail_Implementation() {
}

void UInteractiveComponent::ActionCancel_Implementation() {
}


