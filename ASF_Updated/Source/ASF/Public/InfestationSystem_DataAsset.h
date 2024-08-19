#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InfestationSystem_DataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ASF_API UInfestationSystem_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> InfestationStepsDataTable;
    
    UInfestationSystem_DataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGaugeStepCount(int32 _HiveSize) const;
    
};

