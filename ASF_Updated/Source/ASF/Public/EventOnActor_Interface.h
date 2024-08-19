#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Event_EventOnActorDelegate.h"
#include "Feedback_EventOnActor.h"
#include "EventOnActor_Interface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UEventOnActor_Interface : public UInterface {
    GENERATED_BODY()
};

class IEventOnActor_Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UnbindFromEventOnActor(FEvent_EventOnActor _CallBack) PURE_VIRTUAL(UnbindFromEventOnActor,);
    
    UFUNCTION(BlueprintCallable)
    virtual void CallEventOnActor(const FFeedback_EventOnActor& _Message) PURE_VIRTUAL(CallEventOnActor,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindToEventOnActor(FEvent_EventOnActor _CallBack) PURE_VIRTUAL(BindToEventOnActor,);
    
};

