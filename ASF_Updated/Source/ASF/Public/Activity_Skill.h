#pragma once
#include "CoreMinimal.h"
#include "Activity.h"
#include "EnumActionStatus.h"
#include "Skill_Params.h"
#include "Templates/SubclassOf.h"
#include "Activity_Skill.generated.h"

class AActor;
class UActivity_Skill;
class USkill;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UActivity_Skill : public UActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> UsingSkillEffectClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill* Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* UsingSkillEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkill_Params Skill_Params;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoInitSkill;
    
    UActivity_Skill();

    UFUNCTION(BlueprintCallable)
    void SetSkill(USkill* _Skill);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSkillEnded(USkill* NewSkill, EnumActionStatus _Status);
    
public:
    UFUNCTION(BlueprintCallable)
    USkill* GetSkill();
    
    UFUNCTION(BlueprintCallable)
    static UActivity_Skill* Create_Activity_Skill(AActor* _Context, TSubclassOf<UActivity_Skill> _ActivityClass, USkill* _Skill, FSkill_Params _Skill_Params);
    
};

