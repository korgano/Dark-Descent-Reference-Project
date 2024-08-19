#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CreditsTexts.generated.h"

USTRUCT(BlueprintType)
struct FCreditsTexts : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Job;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Names;
    
    ASF_API FCreditsTexts();
};

