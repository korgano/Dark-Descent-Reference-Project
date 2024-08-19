#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Event_AWheelHandler_boolDelegate.h"
#include "WheelHandler.generated.h"

UCLASS(Blueprintable)
class ASF_API AWheelHandler : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWheelActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AWheelHandler_bool OnWheelActivationChange;
    
    AWheelHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateWheel(bool _bNewActive);
    
};

