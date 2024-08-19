#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_FlameThrower_DataAsset.generated.h"

class UDamagePrimaryDataAsset;

UCLASS(Blueprintable)
class ASF_API USkill_FlameThrower_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamagePrimaryDataAsset* DamagePDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirePuddleRadiusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirePuddleRadiusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillDuration;
    
    USkill_FlameThrower_DataAsset();

};

