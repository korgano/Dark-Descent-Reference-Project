#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIActionGunship.generated.h"

class AAIController_GunShip;
class AGunship;

UCLASS(Blueprintable)
class ASF_API UAIActionGunship : public UAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGunship* Gunship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController_GunShip* GunshipController;
    
public:
    UAIActionGunship();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIController_GunShip* GetGunshipController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGunship* GetGunship() const;
    
};

