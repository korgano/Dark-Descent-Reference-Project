#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AntiAir_Turret_DataAsset.generated.h"

class USoundCue;

UCLASS(Blueprintable)
class ASF_API UAntiAir_Turret_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed_Turret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound_LockOnTarget;
    
    UAntiAir_Turret_DataAsset();

};

