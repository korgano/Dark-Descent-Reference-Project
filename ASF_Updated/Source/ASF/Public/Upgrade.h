#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Upgrade.generated.h"

class UUpgradeDataAssets;

USTRUCT(BlueprintType)
struct FUpgrade : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUpgradeDataAssets* Asset;
    
    ASF_API FUpgrade();
};

