#pragma once
#include "CoreMinimal.h"
#include "TindAnimInstance.h"
#include "AnimInstancePowerloader.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class ASF_API UAnimInstancePowerloader : public UTindAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fOpenCloseSpeedScale;
    
public:
    UAnimInstancePowerloader();

    UFUNCTION(BlueprintCallable)
    void ToggleOpen(bool bOpen, float fSpeedScale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetachActorToPowerloader(AActor* actorToAttach);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachActorToPowerloader(AActor* actorToAttach);
    
};

