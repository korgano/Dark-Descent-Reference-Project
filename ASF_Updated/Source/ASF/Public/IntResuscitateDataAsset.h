#pragma once
#include "CoreMinimal.h"
#include "InteractionPrimaryDataAsset.h"
#include "IntResuscitateDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UIntResuscitateDataAsset : public UInteractionPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CardiacArrestDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CouragePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaPercent;
    
    UIntResuscitateDataAsset();

};

