#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PhaseSwitchAcknow.h"
#include "PhaseSwitchAcknows_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UPhaseSwitchAcknows_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhaseSwitchAcknow> Acknows;
    
    UPhaseSwitchAcknows_DataAsset();

};

