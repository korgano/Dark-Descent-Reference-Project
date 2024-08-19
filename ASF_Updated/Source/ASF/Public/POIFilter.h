#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumFilterType.h"
#include "EnumPOIFilterWeightCurveType.h"
#include "POIDataCollector.h"
#include "StructDataModifierContainer.h"
#include "StructPOIResultData.h"
#include "POIFilter.generated.h"

class UAIPointOfInterestVolatile;
class UPOICondition;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter : public UPOIDataCollector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FilterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOICondition*> FilterCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FilterConditionCanBlock;
    
public:
    UPOIFilter();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFilterUnit(const UAIPointOfInterestVolatile* _Requester) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumFilterType GetFilterType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFilterTag() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugFilterWeight(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, float FilterWeight, bool FilterResult);
    
    UFUNCTION(BlueprintCallable)
    void DebugFilterCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, bool FilterResult, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData);
    
    UFUNCTION(BlueprintCallable)
    void ComputeModifierWeight(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, float& FilterResult);
    
    UFUNCTION(BlueprintCallable)
    void ComputeModifierCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, bool& FilterResult);
    
    UFUNCTION(BlueprintCallable)
    bool ComputeFilterWeight_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, EnumPOIFilterWeightCurveType& _WeightType, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData, float& _WeightValue);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ComputeFilterWeight(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, EnumPOIFilterWeightCurveType& _WeightType, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData, float& _WeightValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ComputeFilterCondition_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ComputeFilterCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeDataModifier(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData);
    
    UFUNCTION(BlueprintCallable)
    bool ComputeCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData);
    
};

