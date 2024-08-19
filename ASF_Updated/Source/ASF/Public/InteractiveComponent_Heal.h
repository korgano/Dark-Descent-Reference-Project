#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent_Ally.h"
#include "InteractiveComponent_Heal.generated.h"

class AHumanoidTactical;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Heal : public UInteractiveComponent_Ally {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* CurrentHealer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* CurrentHealed;
    
    UInteractiveComponent_Heal(const FObjectInitializer& ObjectInitializer);

};

