#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FoeSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FFoeSpawnParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cost;
    
    ASF_API FFoeSpawnParams();
};

