#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MotionTrackerComponent.generated.h"

class AActor;
class UMotionTracker_DataAsset;
class UTrackedComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMotionTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMotionTracker_DataAsset* MotionTracker_DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTrackedComponent*> CurrentTrackedComponents;
    
public:
    UMotionTrackerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MotionTrackerIsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInRange(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInRange(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPulsing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTrackedComponent*> GetCurrentTrackedComponents(bool bWithoutPulsation) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateMotionTracker();
    
    UFUNCTION(BlueprintCallable)
    void ActivateMotionTracker();
    
};

