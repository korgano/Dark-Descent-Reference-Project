#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "EnumControllerType.h"
#include "Event_ControllerTypeDelegate.h"
#include "ControllerHandlerLocalPlayerSS.generated.h"

UCLASS(Blueprintable)
class ASF_API UControllerHandlerLocalPlayerSS : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumControllerType ControllerType;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ControllerType OnControllerTypeChanged;
    
    UControllerHandlerLocalPlayerSS();

    UFUNCTION(BlueprintCallable)
    void SetControllerType(EnumControllerType _newType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumControllerType GetControllerType() const;
    
};

