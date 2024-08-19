#pragma once
#include "CoreMinimal.h"
#include "Event_SkillDelegate.h"
#include "Skill_ShootAtLocation.h"
#include "Skill_ShotgunBlast.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_ShotgunBlast : public USkill_ShootAtLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Skill OnShotInputPressed;
    
    USkill_ShotgunBlast();

};

