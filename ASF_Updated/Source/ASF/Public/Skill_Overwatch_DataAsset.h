#pragma once
#include "CoreMinimal.h"
#include "Skill_LookAt_DataAsset.h"
#include "Skill_Overwatch_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_Overwatch_DataAsset : public USkill_LookAt_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CritChanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DismemberChanceChanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecisionBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDurationWithoutEnemiesBeforeReload;
    
    USkill_Overwatch_DataAsset();

};

