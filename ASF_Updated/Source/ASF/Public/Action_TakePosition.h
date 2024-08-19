#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "DataMove.h"
#include "Templates/SubclassOf.h"
#include "Action_TakePosition.generated.h"

class AActor;
class UAction_TakePosition;

UCLASS(Blueprintable)
class ASF_API UAction_TakePosition : public UAction {
    GENERATED_BODY()
public:
    UAction_TakePosition();

    UFUNCTION(BlueprintCallable)
    static UAction_TakePosition* Create_Action_TakePosition(AActor* _Context, TSubclassOf<UAction_TakePosition> _ActionClass, FDataMove FDataMove);
    
};

