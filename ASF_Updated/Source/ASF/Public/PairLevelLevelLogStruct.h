#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelLogStruct -FallbackName=LevelLogStruct
#include "PairLevelLevelLogStruct.generated.h"

class ULevel;

USTRUCT(BlueprintType)
struct ASF_API FPairLevelLevelLogStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevel* Level;
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FLevelLogStruct LogEntry;*/
    
    FPairLevelLevelLogStruct();
};

