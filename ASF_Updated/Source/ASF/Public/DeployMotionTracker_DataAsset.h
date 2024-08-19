#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "DeployMotionTracker_DataAsset.generated.h"

class UMotionTracker_DataAsset;

UCLASS(Blueprintable)
class ASF_API UDeployMotionTracker_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMotionTracker_DataAsset* PDA_Deployable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecoyDuration;
    
    UDeployMotionTracker_DataAsset();

};

