#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_UWheelComponent_boolDelegate.h"
#include "WheelComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UWheelComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInWheelMode;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UWheelComponent_bool OnWheelModeActivationChange;
    
    UWheelComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetWheelMode(bool _bNewMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWheelMode() const;
    
};

