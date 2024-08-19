#pragma once
#include "CoreMinimal.h"
#include "AIActionHumanoid.h"
#include "DataMove.h"
#include "EnumActionStatus.h"
#include "Templates/SubclassOf.h"
#include "MarinesAIAction.generated.h"

class AHumanoidTactical;
class UAction;

UCLASS(Blueprintable)
class ASF_API UMarinesAIAction : public UAIActionHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAction> ActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataMove DataMove;
    
    UMarinesAIAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAction* StartMarineAction(AHumanoidTactical* _Humanoid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HumanoidActionEnded(UAction* _Action, EnumActionStatus _ActionStatus);
    
};

