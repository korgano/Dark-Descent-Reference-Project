#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectiveOnDeathComponent.generated.h"

class AObjective;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UObjectiveOnDeathComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> ObjectivesToUnLockOnSquadDeath;
    
    UObjectiveOnDeathComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLastSquadMemberDead();
    
};

