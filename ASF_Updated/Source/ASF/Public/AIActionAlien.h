#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIActionAlien.generated.h"

class AAIController_Alien;
class AAlien;

UCLASS(Blueprintable)
class ASF_API UAIActionAlien : public UAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAlien* Alien;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController_Alien* AlienController;
    
public:
    UAIActionAlien();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIController_Alien* GetAlienController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAlien* GetAlien() const;
    
};

