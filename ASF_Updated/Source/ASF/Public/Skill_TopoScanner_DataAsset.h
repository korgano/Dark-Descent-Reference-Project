#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_TopoScanner_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_TopoScanner_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevealRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullRevealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevealDuration;
    
    USkill_TopoScanner_DataAsset();

};

