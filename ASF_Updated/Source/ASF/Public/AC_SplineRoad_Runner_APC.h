#pragma once
#include "CoreMinimal.h"
#include "AC_SplineRoad_Runner.h"
#include "AC_SplineRoad_Runner_APC.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAC_SplineRoad_Runner_APC : public UAC_SplineRoad_Runner {
    GENERATED_BODY()
public:
    UAC_SplineRoad_Runner_APC(const FObjectInitializer& ObjectInitializer);

};

