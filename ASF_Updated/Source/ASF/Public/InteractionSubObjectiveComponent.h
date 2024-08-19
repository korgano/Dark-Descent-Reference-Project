#pragma once
#include "CoreMinimal.h"
#include "AcknowsSequence.h"
#include "EnumActionStatus.h"
#include "Event_SubObjective_ActorDelegate.h"
#include "GameplayTwinReference.h"
#include "ObjectiveFeedbackActorOverride.h"
#include "SubObjectiveComponent.h"
#include "Templates/SubclassOf.h"
#include "InteractionSubObjectiveComponent.generated.h"

class AGameplayTwinActor;
class UInteractiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractionSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference ActorTargetReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractiveComponent> InteractionTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OptionalTargetInteractiveComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceIsNarrativeInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubObjective_Actor OnInteractionStartedOnTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SubObjective_Actor OnInteractionEndedOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveFeedbackActorOverride FeedbackActorOverride;
    
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
    
    UInteractionSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetActorTarget(AGameplayTwinActor* _ActorTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveOnInteractionStarted(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionStarted(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionEnded(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus);
    
};

