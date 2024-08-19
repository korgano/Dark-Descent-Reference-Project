#pragma once
#include "CoreMinimal.h"
#include "StressEffect_DataAsset.h"
#include "Shaking_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UShaking_DataAsset : public UStressEffect_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyMalus;
    
    UShaking_DataAsset();

};

