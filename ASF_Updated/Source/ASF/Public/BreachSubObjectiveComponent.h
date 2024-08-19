#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "SubObjectiveComponent.h"
#include "BreachSubObjectiveComponent.generated.h"

class AActor;
class AGameplayTwinActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UBreachSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> LinkedBreakableWalls;
    
public:
    UBreachSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWallLinked(AGameplayTwinActor* TwinActor);
    
    UFUNCTION(BlueprintCallable)
    void OnWallBroken();
    
    UFUNCTION(BlueprintCallable)
    void OnWallAboutToUnlink(AGameplayTwinActor* TwinActor, AActor* Actor);
    
};

