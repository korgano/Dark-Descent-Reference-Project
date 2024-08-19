#include "ASFLevelScriptActor.h"

AASFLevelScriptActor::AASFLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentSequencer = NULL;
    this->LevelDataAsset = NULL;
    this->IntroWidget = NULL;
}

void AASFLevelScriptActor::SkipSequencer() const {
}

void AASFLevelScriptActor::PlayCameraMissionOutro_Implementation() {
}

void AASFLevelScriptActor::PlayCameraMissionIntro_Implementation() {
}

void AASFLevelScriptActor::OnFinishedDeployMarines(AExtractionTransport* _Transport) {
}

void AASFLevelScriptActor::OnAPC_Register(AASFGameState_TacticalMode* GameState, AExtractionTransport* ExtractionTransport) {
}

void AASFLevelScriptActor::OnAPC_ArrivedAtStart(AActor* Runner) {
}

void AASFLevelScriptActor::LeaveMissionDelayed() {
}

void AASFLevelScriptActor::InitCameraAtEntryPoint() {
}

ULevelPrimaryDataAsset* AASFLevelScriptActor::GetLevelDataAsset() const {
    return NULL;
}

void AASFLevelScriptActor::AskAPC_MoveToExit(const FString& nameExtractionTransport) {
}


