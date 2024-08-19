#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EnumActionStatus.h"
#include "Templates/SubclassOf.h"
#include "TryEndSkillReason.h"
#include "SkillManagerComponent.generated.h"

class UDataTable;
class USkill;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USkillManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkill*> Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill* ActiveSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill* SkillInBackGround;
    
public:
    USkillManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryEndActiveSkill(TryEndSkillReason Reason, FGameplayTag _TrySkillTag, bool forceEndSkill);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSkillLaunched(USkill* Skill);
    
    UFUNCTION(BlueprintCallable)
    void OnSkillEnd(USkill* Skill, EnumActionStatus _Status);
    
public:
    UFUNCTION(BlueprintCallable)
    USkill* GetSkillWithTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkill*> GetSkills();
    
    UFUNCTION(BlueprintCallable)
    USkill* GetActiveSkill();
    
    UFUNCTION(BlueprintCallable)
    void CreateSkills(UDataTable* SkillDataTable, const FGameplayTagContainer& skillTagsContainer);
    
    UFUNCTION(BlueprintCallable)
    void CreateSkill(const TSubclassOf<USkill>& SkillClass);
    
};

