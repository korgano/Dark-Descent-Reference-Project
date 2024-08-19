#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Skill_Tool.generated.h"

class USkill;

UCLASS(Blueprintable)
class ASF_API USkill_Tool : public UObject {
    GENERATED_BODY()
public:
    USkill_Tool();

    UFUNCTION(BlueprintCallable)
    static TArray<USkill*> SkillTool_SortByWeight(const TArray<USkill*>& Skills);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USkill*> SkillTool_GetSkillsUsingResource(const TArray<USkill*>& Skills, FGameplayTag _ResourceTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USkill*> SkillTool_GetSkillsUsingNoResource(const TArray<USkill*>& Skills);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USkill*> SkillTool_GetSkillsUsingCategory(const TArray<USkill*>& Skills, FGameplayTag _Category);
    
};

