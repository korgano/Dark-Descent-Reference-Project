#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "APCRoadProgressForTrigger.generated.h"

USTRUCT(BlueprintType)
struct FAPCRoadProgressForTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference RoadReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RatioFromStart;
    
    ASF_API FAPCRoadProgressForTrigger();
};

