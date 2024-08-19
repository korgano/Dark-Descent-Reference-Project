#pragma once
#include "CoreMinimal.h"
#include "HumanoidOnSpline.generated.h"

class AHumanoidTactical;

USTRUCT(BlueprintType)
struct FHumanoidOnSpline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* Humanoid;
    
    ASF_API FHumanoidOnSpline();
};

