#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIActionHumanoid.generated.h"

class AAiController_Humanoid;
class AHumanoidTactical;

UCLASS(Blueprintable)
class ASF_API UAIActionHumanoid : public UAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* Humanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAiController_Humanoid* HumanoidController;
    
public:
    UAIActionHumanoid();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAiController_Humanoid* GetHumanoidController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoidTactical* GetHumanoid() const;
    
};

