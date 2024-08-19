#pragma once
#include "CoreMinimal.h"
#include "Skill_LookAt.h"
#include "Skill_Overwatch.generated.h"

UCLASS(Blueprintable)
class ASF_API USkill_Overwatch : public USkill_LookAt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakePosition;
    
    USkill_Overwatch();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SkillLoaded();
    
};

