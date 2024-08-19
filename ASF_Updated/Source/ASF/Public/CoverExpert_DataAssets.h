#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "CoverExpert_DataAssets.generated.h"

UCLASS(Blueprintable)
class ASF_API UCoverExpert_DataAssets : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverDodgeBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningDodgeBonus;
    
    UCoverExpert_DataAssets();

};

