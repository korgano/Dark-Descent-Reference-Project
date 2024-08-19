#pragma once
#include "CoreMinimal.h"
#include "AI_POIPerception_Alien.h"
#include "AI_POIPerception_Praetorian.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAI_POIPerception_Praetorian : public UAI_POIPerception_Alien {
    GENERATED_BODY()
public:
    UAI_POIPerception_Praetorian(const FObjectInitializer& ObjectInitializer);

};

