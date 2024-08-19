#pragma once
#include "CoreMinimal.h"
#include "StructDataPad.generated.h"

class UDataPad_DataAsset;

USTRUCT(BlueprintType)
struct FStructDataPad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataPad_DataAsset* DataPadPDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenRead;
    
    ASF_API FStructDataPad();
};

