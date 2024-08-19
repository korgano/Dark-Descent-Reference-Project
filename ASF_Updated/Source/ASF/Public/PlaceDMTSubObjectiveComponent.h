#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTwinReference.h"
#include "SubObjectiveComponent.h"
#include "PlaceDMTSubObjectiveComponent.generated.h"

class AASFPlayerState;
class AActor;
class ADeployableMotionTracker;
class AGameplayTwinActor;
class APlacementRestrictionArea;
class ASquad;
class USkill;
class USkill_Deployable;
class USkill_DeployableMotionTracker;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UPlaceDMTSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> AuthorizedAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlacementRestrictionArea*> LoadedLinkedAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill_DeployableMotionTracker* DMTSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 DMTID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADeployableMotionTracker* LinkedDMT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString DMTSubLevel;
    
public:
    UPlaceDMTSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTwinActorLinked(AGameplayTwinActor* TwinActor);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadDMTSkillUnselected(USkill* Skill);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnRestrictionAreaEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnDMTExistenceValidated(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnDMTEndedPlayBeforeInitialization(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnDMTCreated(USkill_Deployable* MotionTrackerSkill, AActor* MotionTracker);
    
};

