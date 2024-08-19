#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_Mirror.generated.h"

class UAnimationMirrorData;

USTRUCT(BlueprintType)
struct TINDA_MIRRORANIMNODE_API FAnimNode_Mirror : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationMirrorData* AnimMirrorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMirrorActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationMirrorData* AutoGenerateAnimMirrorData;
    
public:
    FAnimNode_Mirror();
};

