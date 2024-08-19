#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "EMovementOrderFrom.h"
#include "SplineRoad_ExitPoint.generated.h"

class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ASplineRoad_ExitPoint : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    ASplineRoad_ExitPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AskAPCMovement(const FString& _APCName, EMovementOrderFrom MovementOrderFrom);
    
};

