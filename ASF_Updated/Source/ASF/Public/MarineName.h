#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGender.h"
#include "MarineName.generated.h"

USTRUCT(BlueprintType)
struct FMarineName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPickable;
    
    ASF_API FMarineName();
};

