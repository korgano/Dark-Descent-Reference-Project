#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CinematicTimeCode.generated.h"

USTRUCT(BlueprintType)
struct FCinematicTimeCode : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString End;
    
    ASF_API FCinematicTimeCode();
};

