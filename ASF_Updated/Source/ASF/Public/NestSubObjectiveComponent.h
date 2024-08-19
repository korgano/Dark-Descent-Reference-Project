#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "SubObjectiveComponent.h"
#include "NestSubObjectiveComponent.generated.h"

class ANest;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UNestSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference ActorTargetReference;
    
    UNestSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnNestDestroyed(ANest* _DestroyedNest);
    
};

