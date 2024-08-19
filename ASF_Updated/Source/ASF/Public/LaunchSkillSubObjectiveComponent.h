#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumActionStatus.h"
#include "LaunchSkillSubObjectiveComponentMethod.h"
#include "SubObjectiveComponent.h"
#include "LaunchSkillSubObjectiveComponent.generated.h"

class AASFPlayerState;
class AHumanoidMarine;
class ASquad;
class USkill;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API ULaunchSkillSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SkillTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    LaunchSkillSubObjectiveComponentMethod Method;
    
    ULaunchSkillSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberAdded(ASquad* Squad, AHumanoidMarine* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnSkillLaunched(USkill* Skill);
    
    UFUNCTION(BlueprintCallable)
    void OnSkillEvent(USkill* Skill, EnumActionStatus _Status);
    
};

