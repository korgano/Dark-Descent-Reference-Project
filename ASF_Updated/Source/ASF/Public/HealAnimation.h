#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HealAnimation.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FHealAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* HealerAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* HealedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform HealLocation;
    
    ASF_API FHealAnimation();
};

