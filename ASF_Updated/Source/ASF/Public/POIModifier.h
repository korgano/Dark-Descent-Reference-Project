#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumFilterType.h"
#include "POIDataCollector.h"
#include "StructPOIResultData.h"
#include "POIModifier.generated.h"

class UAIPointOfInterestVolatile;
class UPOICondition;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIModifier : public UPOIDataCollector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumFilterType ModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModifierTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOICondition*> ModifierCondition;
    
public:
    UPOIModifier();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumFilterType GetModifierType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetModifierTag() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ComputeModifierWeight_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, float& FilterResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void ComputeModifierWeight(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, float& FilterResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ComputeModifierCondition_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, bool& FilterResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void ComputeModifierCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, bool& FilterResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ComputeCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData);
    
};

