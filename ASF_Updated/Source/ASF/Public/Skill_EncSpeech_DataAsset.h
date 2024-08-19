#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "Skill_EncSpeech_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_EncSpeech_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressAmountResetTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumBreakdownCancellationRange;
    
    USkill_EncSpeech_DataAsset();

};

