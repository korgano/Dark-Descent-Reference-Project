#include "TindAnimInstance.h"

UTindAnimInstance::UTindAnimInstance() {
    this->fAngleDeadPose = 0.00f;
    this->StepComponent = NULL;
}

void UTindAnimInstance::SetCrossFadeDuration(FName MachineName, FName PreviousState, FName NextState, float Duration) {
}

void UTindAnimInstance::ReportFootStep(EStepSide StepSide) {
}

void UTindAnimInstance::RemoveBonesFromMesh(USkeletalMesh* SkMesh) {
}

bool UTindAnimInstance::PoseSnapshotIsValid(const FName SnapshotName) const {
    return false;
}

UAnimMontage* UTindAnimInstance::PlayMotionAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

UAnimMontage* UTindAnimInstance::PlayAnimWithoutNotify(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
    return NULL;
}

FPoseSnapshot UTindAnimInstance::GetPoseSnapshot(const FName SnapshotName) const {
    return FPoseSnapshot{};
}

void UTindAnimInstance::CopyPoseSnapshot(const FName SnapshotName, UTindAnimInstance* Source) {
}


