#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "DataMove.h"
#include "Skill_Params.h"
#include "Templates/SubclassOf.h"
#include "Action_Skill.generated.h"

class AASFCharacter;
class AActor;
class UAction_Skill;
class USkill;

UCLASS(Blueprintable)
class ASF_API UAction_Skill : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkill_Params Skill_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill* Skill;
    
    UAction_Skill();

    UFUNCTION(BlueprintCallable)
    static UAction_Skill* Create_Action_Skill(AActor* _Context, TSubclassOf<UAction_Skill> _ActionClass, AASFCharacter* _Instigator, FDataMove _DataMove, USkill* _Skill, FSkill_Params _Skill_Params);
    
};

