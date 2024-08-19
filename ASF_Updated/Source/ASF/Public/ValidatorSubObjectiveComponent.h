#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "SubObjectiveComponent.h"
#include "ValidatorSubObjectiveComponent.generated.h"

class UObjectiveValidatorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UValidatorSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference ActorTargetReference;
    
    UValidatorSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnObjectiveValidated(UObjectiveValidatorComponent* _ObjectiveValidatorComponent);
    
};

