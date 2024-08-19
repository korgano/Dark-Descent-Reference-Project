#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AIActionAlien.h"
#include "Dodge.generated.h"

class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UDodge : public UAIActionAlien {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTimeLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CoodldownTimerHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeProbability;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> DodgeCooldownEffectClass;
    
public:
    UDodge();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldown() const;
    
};

