#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Research.generated.h"

class UBM_ResearchProject_DataAsset;

USTRUCT(BlueprintType)
struct FResearch : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBM_ResearchProject_DataAsset* Asset;
    
    ASF_API FResearch();
};

