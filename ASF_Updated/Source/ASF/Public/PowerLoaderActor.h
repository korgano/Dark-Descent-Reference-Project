#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASFCharacter.h"
#include "Event_PowerLoaderActor_IntDelegate.h"
#include "PowerLoaderAction.h"
#include "PowerLoaderActor.generated.h"

class AActor;
class AHumanoidTactical;
class USceneComponent;

UCLASS(Blueprintable)
class ASF_API APowerLoaderActor : public AASFCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PowerloaderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 actualStepId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsGrabing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FPowerLoaderAction> steps;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_PowerLoaderActor_Int OnStepDone;
    
    APowerLoaderActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryToTriggerTriggerInfo(int32 _stepId, int32 _powerloaderId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTickEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseStep(bool bySave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NextStep(int32 overrideNextStep);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HumanoidEnterLeave(bool Enter, AHumanoidTactical* Humanoid, bool fromSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidActualStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    AHumanoidTactical* GetHumanoidInPowerLoader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<FVector> GetCurrentSpline(bool _OnlyRemainingPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetArrowInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachActorToPowerloader(AActor* actorToAttach);
    
};

