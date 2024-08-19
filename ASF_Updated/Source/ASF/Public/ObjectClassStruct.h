#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ObjectClassStruct.generated.h"

USTRUCT(BlueprintType)
struct FObjectClassStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ObjectClass;
    
    ASF_API FObjectClassStruct();
};

