#pragma once
#include "CoreMinimal.h"
#include "CompressedLevelSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FCompressedLevelSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CompressedSave;
    
    ASF_API FCompressedLevelSaveGame();
};

