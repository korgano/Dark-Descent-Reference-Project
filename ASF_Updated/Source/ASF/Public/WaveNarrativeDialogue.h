#pragma once
#include "CoreMinimal.h"
#include "AcknowsSequence.h"
#include "WaveNarrativeDialogue.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FWaveNarrativeDialogue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence NarrativeDialogueWaveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence NarrativeDialogueWaveEnd;
    
    FWaveNarrativeDialogue();
};

