#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputName.h"
#include "PlayerActionToInputName.generated.h"

USTRUCT(BlueprintType)
struct FPlayerActionToInputName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputName InputName;
    
    ASF_API FPlayerActionToInputName();
};

