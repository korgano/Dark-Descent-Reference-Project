#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_PrecisionShot_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_PrecisionShot_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimDuration;
    
    USkill_PrecisionShot_DataAsset();

};

