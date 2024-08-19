#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumPhaseChangeSubObjective.h"
#include "SubObjectiveComponent.h"
#include "PhaseChangeSubObjectiveComponent.generated.h"

class AASFGameModeBase_TacticalMode;
class ATMEventSystem;
class UFactionSystemic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UPhaseChangeSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPhaseChangeSubObjective CheckEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PhaseTag;
    
    UPhaseChangeSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTacticalPhaseChanged_Event(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic);
    
    UFUNCTION(BlueprintCallable)
    void OnEventSystemSetOnGameMode(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem);
    
};

