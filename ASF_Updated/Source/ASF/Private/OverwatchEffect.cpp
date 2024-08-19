#include "OverwatchEffect.h"

UOverwatchEffect::UOverwatchEffect() {
    this->_DirectiveStopClass = NULL;
    this->CurrentAction = NULL;
}

void UOverwatchEffect::OnDirectiveStop(UDirective* Directive) {
}

void UOverwatchEffect::OnDamageReceived(AActor* ActorWounded, const FDamageResultStruct& Damage) {
}

void UOverwatchEffect::OnAIActionAdded(UAIActionComponent* UAIActionComponent) {
}

void UOverwatchEffect::OnActionEnded(UAction* Action, EnumActionStatus ActionStatus) {
}


