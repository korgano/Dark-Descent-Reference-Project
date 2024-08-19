#pragma once
#include "CoreMinimal.h"
#include "ESaveMode.h"
#include "SaveModeParam.generated.h"

USTRUCT(BlueprintType)
struct FSaveModeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveMode SaveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    ASF_API FSaveModeParam();
};

