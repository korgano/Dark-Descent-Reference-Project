#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "OnRoamAreaTriggeredDelegateDelegate.h"
#include "GunshipRoamArea.generated.h"

class AGunshipRoamingSpline;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASF_API AGunshipRoamArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AreaTriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGunshipRoamingSpline*> RoamSplines;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoamAreaTriggeredDelegate OnRoamAreaTriggered;
    
    AGunshipRoamArea(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAreaTriggerOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGunshipRoamingSpline*> GetRoamSplines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGunshipRoamingSpline* GetRandomRoamSpline(AGunshipRoamingSpline* SplineToIgnore) const;
    
};

