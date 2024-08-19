#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EnumPOIComputationPolicy.h"
#include "PointOfInterest_DataAsset.generated.h"

class UAIPointOfInterestVolatile;
class UPOIDataModifier;
class UPOIFilter;
class UPOIModifier;

UCLASS(Blueprintable)
class ASF_API UPointOfInterest_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAIPointOfInterestVolatile> PointOfInterestClass_Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIComputationPolicy ComputationPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerceptionCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOIFilter*> InterestConditionFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOIFilter*> Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOIModifier*> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOIDataModifier*> DataModifiers;
    
    UPointOfInterest_DataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPOIModifier*> GetModifierWithTag(FGameplayTag _ModifierTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPOIDataModifier*> GetDataModifierWithTag(FGameplayTag _ModifierTag) const;
    
};

