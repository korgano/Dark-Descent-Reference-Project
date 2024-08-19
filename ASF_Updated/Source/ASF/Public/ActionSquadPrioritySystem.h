#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "HumanoidActionDurationEstimation.h"
#include "ActionSquadPrioritySystem.generated.h"

class AHumanoidTactical;
class ASquad;
class UAction;
class UActivity;
class UInteractiveComponent;
class UWorld;

UCLASS(Blueprintable)
class ASF_API UActionSquadPrioritySystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
public:
    UActionSquadPrioritySystem();

    UFUNCTION(BlueprintCallable)
    void SetSquad(ASquad* _Squad);
    
private:
    UFUNCTION(BlueprintCallable)
    AHumanoidTactical* ResolveTie(TArray<FHumanoidActionDurationEstimation>& _BestMarines) const;
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetWorld() const;
    
    UFUNCTION(BlueprintCallable)
    float GetVelocityForMarine(AHumanoidTactical* _Humanoid) const;
    
    UFUNCTION(BlueprintCallable)
    float GetRemainingDurationForCurrentInteraction(AHumanoidTactical* _Humanoid);
    
    UFUNCTION(BlueprintCallable)
    float GetMarineFirePower(AHumanoidTactical* _Humanoid) const;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetFocusActivitySelectWeight(const AHumanoidTactical* _currentSelectedHumanoid, const AHumanoidTactical* _Humanoid, const FVector cursorLoc) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void GetBestMarinesInOrder(TArray<FHumanoidActionDurationEstimation>& _Humanoids, TArray<FHumanoidActionDurationEstimation>& _BestMarines) const;
    
public:
    UFUNCTION(BlueprintCallable)
    AHumanoidTactical* GetBestMarineForInteraction(UInteractiveComponent* _InteractiveComponent, const TArray<AHumanoidTactical*>& _AvailableHumanoid, bool _bRun);
    
    UFUNCTION(BlueprintCallable)
    AHumanoidTactical* GetBestHumanoidToFocusLight(UActivity* Activity_PlayerFocus);
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<UAction*> GetActionToConsider(AHumanoidTactical* _Humanoid);
    
    UFUNCTION(BlueprintCallable)
    float EstimateTravelDurationToLocation(AHumanoidTactical* _Humanoid, UInteractiveComponent* _InteractiveComponent, bool _bRun);
    
    UFUNCTION(BlueprintCallable)
    float EstimateInteractionDuration(AHumanoidTactical* _Humanoid, UInteractiveComponent* _InteractiveComponent);
    
};

