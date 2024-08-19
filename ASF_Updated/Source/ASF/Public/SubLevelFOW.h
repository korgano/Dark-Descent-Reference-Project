#pragma once
#include "CoreMinimal.h"
#include "SubLevelFOW.generated.h"

class UFOWRevertedReader;

USTRUCT(BlueprintType)
struct ASF_API FSubLevelFOW {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UFOWRevertedReader*> SubLevelFOW;
    
    FSubLevelFOW();
};

