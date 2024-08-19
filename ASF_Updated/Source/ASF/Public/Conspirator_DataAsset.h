#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RestModifier_Interface.h"
#include "Trait_DataAsset.h"
#include "Conspirator_DataAsset.generated.h"

class ASquad;

UCLASS(Blueprintable)
class ASF_API UConspirator_DataAsset : public UTrait_DataAsset, public IRestModifier_Interface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealStress_Malus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RestDescription;
    
    UConspirator_DataAsset();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FString GetRestModifierDescription(ASquad* _Squad) override PURE_VIRTUAL(GetRestModifierDescription, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    int32 GetNbApplicationOfRestModifier(ASquad* _Squad) override PURE_VIRTUAL(GetNbApplicationOfRestModifier, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetModifierTag() override PURE_VIRTUAL(GetModifierTag, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    bool CanApplyRestModifier(ASquad* _Squad) override PURE_VIRTUAL(CanApplyRestModifier, return false;);
    
};

