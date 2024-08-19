#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Tool_DisplayErrors.generated.h"

class AActor;
class ASquad;
class UInteractiveComponent;
class USkill;

UCLASS(Blueprintable)
class ASF_API UTool_DisplayErrors : public UObject {
    GENERATED_BODY()
public:
    UTool_DisplayErrors();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSkillErrors_Filtered(TMap<AActor*, FGameplayTagContainer>& _ErrorTagContairers, bool& _CanBeLaunch, USkill* _SquadSkill, ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetInteractionErrors_Filtered(UInteractiveComponent* _Interaction, ASquad* _Squad, TMap<AActor*, FGameplayTagContainer>& _ErrorTagContairers);
    
};

