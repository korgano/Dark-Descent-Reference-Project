#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "CutsceneAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct TINDA_MIRRORANIMNODE_API FCutsceneAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FCutsceneAnimInstanceProxy();
};

