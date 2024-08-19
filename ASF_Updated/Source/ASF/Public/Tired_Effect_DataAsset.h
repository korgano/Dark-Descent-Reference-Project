#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Tired_Effect_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UTired_Effect_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BraveryEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecisionEffect;
    
    UTired_Effect_DataAsset();

};

