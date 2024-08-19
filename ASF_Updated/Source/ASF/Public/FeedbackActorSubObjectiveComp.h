#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "EActorReferenceType.h"
#include "GameplayTwinReference.h"
#include "SubLevelID.h"
#include "SubObjectiveComponent.h"
#include "FeedbackActorSubObjectiveComp.generated.h"

class AASFGameStateBase;
class AActor;
class AGameplayTwinActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UFeedbackActorSubObjectiveComp : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorReferenceType ReferenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference ActorTargetReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID OverrideTargetSubLevelID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorCharacterID;
    
public:
    UFeedbackActorSubObjectiveComp(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetActorTarget(AGameplayTwinActor* _ActorTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* _DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void BindEventToActor(AASFGameStateBase* _GameState, AActor* _Actor);
    
};

