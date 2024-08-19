#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SettingsInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FSettingsInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Resolution;
    
    FSettingsInfosStruct();
};

