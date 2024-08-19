#pragma once
#include "CoreMinimal.h"
#include "EnnemyTargetingComponent.h"
#include "EggTargetingComponent.generated.h"

class AEgg;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UEggTargetingComponent : public UEnnemyTargetingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEgg* Egg;
    
public:
    UEggTargetingComponent(const FObjectInitializer& ObjectInitializer);

};

