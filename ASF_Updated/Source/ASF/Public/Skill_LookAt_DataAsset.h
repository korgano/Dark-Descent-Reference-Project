#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_LookAt_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_LookAt_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FeedbackCenterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetFromInstigator;
    
    USkill_LookAt_DataAsset();

};

