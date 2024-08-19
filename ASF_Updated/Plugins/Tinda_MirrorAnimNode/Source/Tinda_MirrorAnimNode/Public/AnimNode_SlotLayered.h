#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_Slot.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_SlotLayered.generated.h"

USTRUCT(BlueprintType)
struct TINDA_MIRRORANIMNODE_API FAnimNode_SlotLayered : public FAnimNode_Slot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink LayeredPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayeredBoneName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SkeletonGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid VirtualBoneGuid;
    
public:
    FAnimNode_SlotLayered();
};

