#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Wheel_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UWheel_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Half_Angle_Display_Skill;
    
    UWheel_DataAsset();

};

