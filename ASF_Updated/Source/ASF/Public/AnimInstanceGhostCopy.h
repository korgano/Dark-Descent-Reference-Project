#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TindAnimInstance.h"
#include "AnimInstanceGhostCopy.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class ASF_API UAnimInstanceGhostCopy : public UTindAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BaseCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontageBasePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
public:
    UAnimInstanceGhostCopy();

    UFUNCTION(BlueprintCallable)
    void SetBaseCharacter(USkeletalMeshComponent* _BaseCharacter);
    
    UFUNCTION(BlueprintCallable)
    void LaunchAnim(UAnimSequenceBase* Asset, float ScaledPlayRate, float BasePlayRate, float BlendInTime, float BlendOutTime, float OffsetDelay);
    
    UFUNCTION(BlueprintCallable)
    void ForceAnimEnd();
    
    UFUNCTION(BlueprintCallable)
    void DelayAfterLaunch();
    
};

