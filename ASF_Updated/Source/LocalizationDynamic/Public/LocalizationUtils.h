#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocalizationUtils.generated.h"

class UObject;
class UPrimaryDataAsset;

UCLASS(Blueprintable)
class LOCALIZATIONDYNAMIC_API ULocalizationUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocalizationUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDescriptionWithValueFromPropertyName(UPrimaryDataAsset* DataAsset, const FName& PropertyName, const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetDescriptionWithValue(UPrimaryDataAsset* DataAsset, const UObject* WorldContextObject);
    
};

