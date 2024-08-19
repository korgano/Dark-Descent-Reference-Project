#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AcknowVariants.h"
#include "EStressStep.h"
#include "StressEffect_DataAsset.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class ASF_API UStressEffect_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MarineCardSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> StressEffectIcon_Little;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> StressEffectIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStressStep, FAcknowVariants> StressStepAcknows;
    
    UStressEffect_DataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetSummary(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FText GetDescription(const UObject* WorldContextObject);
    
};

