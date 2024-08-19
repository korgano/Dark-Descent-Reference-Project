#pragma once
#include "CoreMinimal.h"
#include "EnumMissionDifficulty.h"
#include "GameDifficultyParam.generated.h"

USTRUCT(BlueprintType)
struct FGameDifficultyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumMissionDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    ASF_API FGameDifficultyParam();
};

