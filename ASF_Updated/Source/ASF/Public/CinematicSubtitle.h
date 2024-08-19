#pragma once
#include "CoreMinimal.h"
#include "CinematicSubtitle.generated.h"

USTRUCT(BlueprintType)
struct FCinematicSubtitle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ASF_API FCinematicSubtitle();
};

