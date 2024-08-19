#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_Slot.h"
#include "AnimNode_SlotMirror.generated.h"

class UAnimationMirrorData;

USTRUCT(BlueprintType)
struct TINDA_MIRRORANIMNODE_API FAnimNode_SlotMirror : public FAnimNode_Slot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationMirrorData* AnimMirrorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMirrorActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationMirrorData* AutoGenerateAnimMirrorData;
    
public:
    FAnimNode_SlotMirror();
};

