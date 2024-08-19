#pragma once
#include "CoreMinimal.h"
#include "ObjectiveFeedbackActorOverride.h"
#include "SubObjectiveComponent.h"
#include "ReachSubObjectiveComponent.generated.h"

class AActor;
class ATriggerObjectiveActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UReachSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeactivateTriggersOnCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveFeedbackActorOverride FeedbackActorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyCreateFeedbackForFirstTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerObjectiveActor*> LinkedTriggers;
    
    UReachSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlap(ATriggerObjectiveActor* Trigger, AActor* Actor);
    
};

