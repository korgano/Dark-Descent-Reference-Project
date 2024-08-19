#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RestModifier_Interface.h"
#include "Trauma_DataAsset.h"
#include "Claustrophobia_DataAsset.generated.h"

class ASquad;

UCLASS(Blueprintable)
class ASF_API UClaustrophobia_DataAsset : public UTrauma_DataAsset, public IRestModifier_Interface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RestDescription_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RestDescription_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RestDescription_3;
    
    UClaustrophobia_DataAsset();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetRestModifierDescriptions(ASquad* _Squad);
    

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

