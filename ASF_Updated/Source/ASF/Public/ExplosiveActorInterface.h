#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ExplosiveActorInterface.generated.h"

UINTERFACE(Blueprintable)
class UExplosiveActorInterface : public UInterface {
    GENERATED_BODY()
};

class IExplosiveActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInRadiusOfExplosion(FVector _From, FVector _To, float _MaxRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InRadiusOfExplosion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanBeAffectedByDamageType(FGameplayTag DamageTypes);
    
};

