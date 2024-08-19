#pragma once
#include "CoreMinimal.h"
#include "LevelFogOfWar.generated.h"

USTRUCT(BlueprintType)
struct FLevelFogOfWar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> FOWMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Datas;
    
    ASF_API FLevelFogOfWar();
};

