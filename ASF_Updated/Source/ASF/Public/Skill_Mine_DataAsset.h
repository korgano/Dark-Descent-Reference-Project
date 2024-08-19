#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_Mine_DataAsset.generated.h"

class UZoneExplosionDataAsset;

UCLASS(Blueprintable)
class ASF_API USkill_Mine_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZoneExplosionDataAsset* ExplosionDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbMineInMineField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenExplosion;
    
    USkill_Mine_DataAsset();

};

