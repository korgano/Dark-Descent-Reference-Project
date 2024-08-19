#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Engine/EngineTypes.h"
#include "Event_AnimNotifyDelegate.h"
#include "Event_DoorAnimInstanceDelegate.h"
#include "DoorAnimInstance.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, NonTransient)
class ASF_API UDoorAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FadeInSequencerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FadeOutSequencerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSequencerTimeDelayed2Frames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerOpenCloseHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnimNotify OnClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DoorAnimInstance OnRequestUpdate;
    
    UDoorAnimInstance();

    UFUNCTION(BlueprintCallable)
    void ToggleTickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimationAsset(UAnimationAsset* NewAsset);
    
    UFUNCTION(BlueprintCallable)
    void RequestNextUpdateBroadcast();
    
    UFUNCTION(BlueprintCallable)
    void OpenFinished();
    
    UFUNCTION(BlueprintCallable)
    void Open(float PlayRate, float StartPosition, bool bNoAnim);
    
    UFUNCTION(BlueprintCallable)
    void OnProxyRequestUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Init(bool NewOpen);
    
    UFUNCTION(BlueprintCallable)
    void CloseFinished();
    
    UFUNCTION(BlueprintCallable)
    void Close(float PlayRate, float StartPosition, bool bNoAnim);
    
};

