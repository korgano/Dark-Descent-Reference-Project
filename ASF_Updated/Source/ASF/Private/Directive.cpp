#include "Directive.h"

UDirective::UDirective() {
    this->Squad = NULL;
    this->Directive_DataAsset = NULL;
}

void UDirective::PlayDirectiveAcknows(AActor* _TargetActor) {
}

bool UDirective::IsDirectiveAvailable_Implementation(AActor* _TargetActor, FGameplayTagContainer& ErrorReasons) {
    return false;
}

FText UDirective::GetDirectiveName() const {
    return FText::GetEmpty();
}

UTexture2D* UDirective::GetDirectiveIcon_Implementation(bool _bIsSquadDirective, bool Selected) const {
    return NULL;
}

void UDirective::ExecuteDirective_Implementation(AActor* _TargetActor, bool _WithAcknow) {
}

void UDirective::ConsumeResourceNeeded() {
}

bool UDirective::CanSpendAllRessourcesNeeded() {
    return false;
}


