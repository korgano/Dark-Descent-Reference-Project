#include "AnimInstanceGhostCopy.h"

UAnimInstanceGhostCopy::UAnimInstanceGhostCopy() {
    this->BaseCharacter = NULL;
    this->Montage = NULL;
    this->MontageBasePlayRate = 0.00f;
}

void UAnimInstanceGhostCopy::SetBaseCharacter(USkeletalMeshComponent* _BaseCharacter) {
}

void UAnimInstanceGhostCopy::LaunchAnim(UAnimSequenceBase* Asset, float ScaledPlayRate, float BasePlayRate, float BlendInTime, float BlendOutTime, float OffsetDelay) {
}

void UAnimInstanceGhostCopy::ForceAnimEnd() {
}

void UAnimInstanceGhostCopy::DelayAfterLaunch() {
}


