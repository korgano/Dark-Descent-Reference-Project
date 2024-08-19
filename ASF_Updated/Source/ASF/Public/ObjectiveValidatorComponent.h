#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_ObjectiveValidatorComponentDelegate.h"
#include "ObjectiveValidatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UObjectiveValidatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ObjectiveValidatorComponent ObjectiveSuccess;
    
    UObjectiveValidatorComponent(const FObjectInitializer& ObjectInitializer);

};

