#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EventSettings.generated.h"

class UTMEvent;

USTRUCT(BlueprintType)
struct FEventSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTMEvent> Class;
    
    ASF_API FEventSettings();
};

