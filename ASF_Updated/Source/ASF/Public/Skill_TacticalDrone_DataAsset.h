#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_TacticalDrone_DataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ASF_API USkill_TacticalDrone_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SkillLittleIcon_Alternative;
    
    USkill_TacticalDrone_DataAsset();

};

