#pragma once
#include "CoreMinimal.h"
#include "CustomMissionPhase.generated.h"

USTRUCT(BlueprintType)
struct FCustomMissionPhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, SaveGame, meta=(AllowPrivateAccess=true))
    FString CustomPhaseName;
    
    ASF_API FCustomMissionPhase();
};

