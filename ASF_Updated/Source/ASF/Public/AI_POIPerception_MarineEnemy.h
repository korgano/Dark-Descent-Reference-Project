#pragma once
#include "CoreMinimal.h"
#include "AI_POIPerception_Base.h"
#include "AI_POIPerception_MarineEnemy.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAI_POIPerception_MarineEnemy : public UAI_POIPerception_Base {
    GENERATED_BODY()
public:
    UAI_POIPerception_MarineEnemy(const FObjectInitializer& ObjectInitializer);

};

