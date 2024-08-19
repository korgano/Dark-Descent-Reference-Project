#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TraitParams.generated.h"

class UTrait_DataAsset;

USTRUCT(BlueprintType)
struct FTraitParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrait_DataAsset* Asset;
    
    ASF_API FTraitParams();
};

