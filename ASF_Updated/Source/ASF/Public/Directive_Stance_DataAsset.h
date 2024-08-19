#pragma once
#include "CoreMinimal.h"
#include "Directive_DataAsset.h"
#include "Directive_Stance_DataAsset.generated.h"

class USoundCue;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UDirective_Stance_DataAsset : public UDirective_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> Effect_FiringRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FiringRate_Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionReductionProximitySpawn;
    
    UDirective_Stance_DataAsset();

};

