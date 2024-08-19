#pragma once
#include "CoreMinimal.h"
#include "Skill_DataAsset.h"
#include "StimPack_DataAsset.generated.h"

class USoundCue;

UCLASS(Blueprintable)
class ASF_API UStimPack_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* StimPackSound;
    
    UStimPack_DataAsset();

};

