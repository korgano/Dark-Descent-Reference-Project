#pragma once
#include "CoreMinimal.h"
#include "TindAnimInstance.h"
#include "AnimInstanceCorpse.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASF_API UAnimInstanceCorpse : public UTindAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FadeInSequencerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FadeOutSequencerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSequencerTimeDelayed2Frames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeadPoseSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoDeadPoseExisting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLooted;
    
public:
    UAnimInstanceCorpse();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopLoot(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartLoot();
    
    UFUNCTION(BlueprintCallable)
    void OnDeadPoseSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLooted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GenerateIdVariation();
    
};

