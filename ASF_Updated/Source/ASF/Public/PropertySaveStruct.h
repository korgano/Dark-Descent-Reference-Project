#pragma once
#include "CoreMinimal.h"
#include "PropertySaveStruct.generated.h"

USTRUCT(BlueprintType)
struct FPropertySaveStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Datas;
    
    ASF_API FPropertySaveStruct();
};

