#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_TacticalAnalysis_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_TacticalAnalysis_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbCommandPointAdded;
    
    USkill_TacticalAnalysis_DataAsset();

};

