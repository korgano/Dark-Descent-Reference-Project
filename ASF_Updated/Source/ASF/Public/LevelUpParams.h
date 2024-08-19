#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelUpParams.generated.h"

USTRUCT(BlueprintType)
struct FLevelUpParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XPPointsRequired;
    
    ASF_API FLevelUpParams();
};

