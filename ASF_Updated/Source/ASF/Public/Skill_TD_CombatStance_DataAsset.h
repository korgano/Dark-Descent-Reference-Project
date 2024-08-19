#pragma once
#include "CoreMinimal.h"
#include "EDroneCombatStance.h"
#include "Skill_DataAsset.h"
#include "Skill_TD_CombatStance_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_TD_CombatStance_DataAsset : public USkill_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneCombatStance DroneCombatStance;
    
    USkill_TD_CombatStance_DataAsset();

};

