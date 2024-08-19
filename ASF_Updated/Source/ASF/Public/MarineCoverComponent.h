#pragma once
#include "CoreMinimal.h"
#include "CoverComponent.h"
#include "MarineCoverComponent.generated.h"

class AHumanoidTactical;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMarineCoverComponent : public UCoverComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* HumanoidOwner;
    
public:
    UMarineCoverComponent(const FObjectInitializer& ObjectInitializer);

};

