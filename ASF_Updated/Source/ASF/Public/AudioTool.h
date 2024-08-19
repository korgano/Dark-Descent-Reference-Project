#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioTool.generated.h"

class AActor;
class USoundCue;

UCLASS(Blueprintable)
class ASF_API UAudioTool : public UObject {
    GENERATED_BODY()
public:
    UAudioTool();

    UFUNCTION(BlueprintCallable)
    static void PlaySoftSound(const TSoftObjectPtr<USoundCue>& Sound, AActor* Target, int32 ProbabilityToPlay);
    
};

