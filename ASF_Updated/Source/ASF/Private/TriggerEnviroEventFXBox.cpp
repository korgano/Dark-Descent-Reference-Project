#include "TriggerEnviroEventFXBox.h"

ATriggerEnviroEventFXBox::ATriggerEnviroEventFXBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DelayBeforeSequenceStart = 0.00f;
}

void ATriggerEnviroEventFXBox::TestFXSequence() {
}

void ATriggerEnviroEventFXBox::OnSequenceStartTimerExpired() {
}

void ATriggerEnviroEventFXBox::OnFXActorStopTimerExpired(FTriggerBoxFXData& FXData) {
}

void ATriggerEnviroEventFXBox::OnFXActorStartTimerExpired(FTriggerBoxFXData& FXData) {
}


