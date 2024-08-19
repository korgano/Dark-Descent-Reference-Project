#include "Gunship.h"
#include "AIActionComponent.h"
#include "AnimationComponent.h"
#include "MarineStatComponent.h"

AGunship::AGunship(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = CreateDefaultSubobject<UMarineStatComponent>(TEXT("MarineStatComponent"));
    this->AnimationComponent = CreateDefaultSubobject<UAnimationComponent>(TEXT("AnimationComponent"));
    this->DataAsset = NULL;
    this->POITargetingComponent = NULL;
    this->AIActionComponent = CreateDefaultSubobject<UAIActionComponent>(TEXT("AIActionComponent"));
}

void AGunship::OnScriptedActionStop(UAIActionComponent* _AIActionComponent) {
}

void AGunship::OnScriptedActionStart(UAIActionComponent* _AIActionComponent, bool _ForceActionAbort, bool _ForceAnimationAbort) {
}

void AGunship::OnExecutedActionChanged(UAIActionComponent* _AIActionComponent, UAIAction* _OldAction, UAIAction* _NewAction) {
}

void AGunship::OnActionStop(UAIActionComponent* _AIActionComponent, UAIAction* _Action, EnumAIActionStatus _AIActionStatus) {
}

void AGunship::OnActionStart(UAIActionComponent* _AIActionComponent) {
}

UGunShipClassDataAsset* AGunship::GetGunshipDataAsset() const {
    return NULL;
}


