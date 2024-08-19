#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTwinReference.h"
#include "SubObjectiveComponent.h"
#include "PlaceSentrySubObjectiveComponent.generated.h"

class AASFPlayerState;
class AActor;
class AGameplayTwinActor;
class APlacementRestrictionArea;
class ASentry;
class ASquad;
class USkill;
class USkill_Deployable;
class USkill_Sentry;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UPlaceSentrySubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> AuthorizedAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlacementRestrictionArea*> LoadedLinkedAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill_Sentry* SquadSentrySkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkill_Sentry* InteractorSentrySkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SentryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASentry* LinkedSentry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SentrySubLevel;
    
public:
    UPlaceSentrySubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTwinActorLinked(AGameplayTwinActor* TwinActor);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadSentrySkillUnselected(USkill* Skill);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnSentryExistenceValidated(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnSentryEndedPlayBeforeInitialization(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnSentryCreated(USkill_Deployable* SentrySkill, AActor* Sentry);
    
    UFUNCTION(BlueprintCallable)
    void OnRestrictionAreaEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSentrySpawned(USkill_Deployable* SentrySkill, ASentry* Sentry);
    
};

