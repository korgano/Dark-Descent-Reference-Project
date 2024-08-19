#pragma once
#include "CoreMinimal.h"
#include "MapFeedbackComponent.h"
#include "MapFeedback_SubObjective.generated.h"

class USubObjectiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMapFeedback_SubObjective : public UMapFeedbackComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubObjectiveComponent* SubObjectiveOwner;
    
    UMapFeedback_SubObjective(const FObjectInitializer& ObjectInitializer);

};

