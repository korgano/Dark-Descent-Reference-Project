#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_Slot.h"
#include "AnimNode_SequencerSlot.generated.h"

USTRUCT(BlueprintType)
struct TINDA_MIRRORANIMNODE_API FAnimNode_SequencerSlot : public FAnimNode_Slot {
    GENERATED_BODY()
public:
    FAnimNode_SequencerSlot();
};

