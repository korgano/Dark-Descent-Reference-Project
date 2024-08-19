#pragma once
#include "CoreMinimal.h"
#include "AcknowsSequence.h"
#include "CharacterIDName.h"
#include "DamageResultStruct.h"
#include "EnumActionStatus.h"
#include "Event_CharacInterSubObjective_ActorDelegate.h"
#include "GameplayTwinReference.h"
#include "SubObjectiveComponent.h"
#include "Templates/SubclassOf.h"
#include "CharacInteractionSubObjComp.generated.h"

class AASFCharacter;
class AASFGameStateBase;
class AActor;
class UInteractiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCharacInteractionSubObjComp : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference ActorTargetReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractiveComponent> InteractionTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OptionalTargetInteractiveComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceIsNarrativeInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_CharacInterSubObjective_Actor OnInteractionStartedOnTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_CharacInterSubObjective_Actor OnInteractionEndedOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractiveComponent* TargetInteractiveComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence OnStartedInteractionNarrativeDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence OnEndedInteractionNarrativeDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool InteractionActivationStateBeforeObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool InteractionNarrativeStateBeforeObjective;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoFocusObjectiveOnCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsInteractionInit;
    
    UCharacInteractionSubObjComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SaveOnInteractionStarted(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionStarted(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionEnded(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionDelayedAdded(AASFCharacter* Character, UInteractiveComponent* InteractiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AASFCharacter* _ActorKilled, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* _DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void BindEventToActor(AASFGameStateBase* _GameState, AActor* _Actor);
    
};

