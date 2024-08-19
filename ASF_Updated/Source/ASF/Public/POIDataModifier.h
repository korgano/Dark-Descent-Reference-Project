#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POIDataCollector.h"
#include "StructDataModifier.h"
#include "StructPOIResultData.h"
#include "POIDataModifier.generated.h"

class UAIPointOfInterestVolatile;
class UPOICondition;
class UPOIDataModifier;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataModifier : public UPOIDataCollector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModifierTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOICondition*> ModifierCondition;
    
public:
    UPOIDataModifier();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetModifierTag() const;
    
    UFUNCTION(BlueprintCallable)
    void ComputeModifierData_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, TArray<FStructDataModifier>& ModifierData);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ComputeCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData);
    
public:
    UFUNCTION(BlueprintCallable)
    void ComputeAvailableDataModifier(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, TArray<UPOIDataModifier*>& ModifierData);
    
};

