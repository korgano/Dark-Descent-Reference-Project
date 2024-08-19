#include "GameplayTwinCustomDetailWIdget.h"

UGameplayTwinCustomDetailWIdget::UGameplayTwinCustomDetailWIdget() : UUserWidget(FObjectInitializer::Get()) {
    this->TargetActor = NULL;
}

void UGameplayTwinCustomDetailWIdget::SetSelectedLevelActors(const TArray<AActor*>& ActorsToSelect) {
}

void UGameplayTwinCustomDetailWIdget::SetLevelViewportCameraInfo(FVector CameraLocation, FRotator CameraRotation) {
}

void UGameplayTwinCustomDetailWIdget::SetActor_Implementation(AActor* Actor) {
}

TArray<AActor*> UGameplayTwinCustomDetailWIdget::GetSelectedLevelActors() {
    return TArray<AActor*>();
}

bool UGameplayTwinCustomDetailWIdget::GetLevelViewportCameraInfo(FVector& CameraLocation, FRotator& CameraRotation) {
    return false;
}


