#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SwitchHierarchy.generated.h"

USTRUCT(BlueprintType)
struct FSwitchHierarchy : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SWITCH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> SwitchNeeded;
    
    ASF_API FSwitchHierarchy();
};

