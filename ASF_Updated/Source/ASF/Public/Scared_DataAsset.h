#pragma once
#include "CoreMinimal.h"
#include "StressEffect_DataAsset.h"
#include "Scared_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UScared_DataAsset : public UStressEffect_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChancesPerTickToFireAtVisibleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChancesPerTickToFireAtAmbushPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickFrequencyPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmbushReactionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyMalus;
    
    UScared_DataAsset();

};

