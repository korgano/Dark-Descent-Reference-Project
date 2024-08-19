#pragma once
#include "CoreMinimal.h"
#include "StressEffect_DataAsset.h"
#include "Berserk_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UBerserk_DataAsset : public UStressEffect_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultAmmoPerBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyMalus;
    
    UBerserk_DataAsset();

};

