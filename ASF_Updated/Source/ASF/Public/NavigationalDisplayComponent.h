#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_NavigationalDisplayComponent_ActorDelegate.h"
#include "NavigationalDisplayData.h"
#include "NavigationalDisplayComponent.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UNavigationalDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetActors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_NavigationalDisplayComponent_Actor OnActorToTargetAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_NavigationalDisplayComponent_Actor OnActorToTargetRemoved;
    
    UNavigationalDisplayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveActorToTarget(AActor* _ActorToTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddActorToTarget(AActor* _ActorToTarget, const FNavigationalDisplayData& _DisplayData, float _MinDistance, UObject* _Source);
    
};

