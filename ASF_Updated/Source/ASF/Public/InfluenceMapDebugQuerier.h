#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InfluenceMapDebugQuerier.generated.h"

class UInfluenceMapArea;

USTRUCT(BlueprintType)
struct ASF_API FInfluenceMapDebugQuerier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UInfluenceMapArea>> DebugedInfluenceMapArea;
    
    FInfluenceMapDebugQuerier();
};

