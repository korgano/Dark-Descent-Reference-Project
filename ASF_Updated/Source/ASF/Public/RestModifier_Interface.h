#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "RestModifier_Interface.generated.h"

class ASquad;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class URestModifier_Interface : public UInterface {
    GENERATED_BODY()
};

class IRestModifier_Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FString GetRestModifierDescription(ASquad* _Squad) PURE_VIRTUAL(GetRestModifierDescription, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNbApplicationOfRestModifier(ASquad* _Squad) PURE_VIRTUAL(GetNbApplicationOfRestModifier, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTag GetModifierTag() PURE_VIRTUAL(GetModifierTag, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanApplyRestModifier(ASquad* _Squad) PURE_VIRTUAL(CanApplyRestModifier, return false;);
    
};

