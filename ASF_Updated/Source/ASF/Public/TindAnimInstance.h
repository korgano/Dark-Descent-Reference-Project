#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/PoseSnapshot.h"
#include "EStepSide.h"
#include "TindAnimInstance.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class USkeletalMesh;
class UStepSFXVFXComponent;
class UTindAnimInstance;

UCLASS(Blueprintable, NonTransient)
class ASF_API UTindAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fAngleDeadPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStepSFXVFXComponent* StepComponent;
    
    UTindAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetCrossFadeDuration(FName MachineName, FName PreviousState, FName NextState, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ReportFootStep(EStepSide StepSide);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBonesFromMesh(USkeletalMesh* SkMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PoseSnapshotIsValid(const FName SnapshotName) const;
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayMotionAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayAnimWithoutNotify(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPoseSnapshot GetPoseSnapshot(const FName SnapshotName) const;
    
    UFUNCTION(BlueprintCallable)
    void CopyPoseSnapshot(const FName SnapshotName, UTindAnimInstance* Source);
    
};

