#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Event_ACursor3D_BoolDelegate.h"
#include "Cursor3D.generated.h"

UCLASS(Blueprintable)
class ASF_API ACursor3D : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ACursor3D_Bool OnCancelInteractionEnable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCancelInteractionEnable;
    
public:
    ACursor3D(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCancelInteractionEnable() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableCancelInteraction(bool _IsCancelInteractionEnable);
    
};

