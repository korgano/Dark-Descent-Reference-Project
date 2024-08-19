#pragma once
#include "CoreMinimal.h"
#include "PopUpInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FPopUpInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString popup_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float display_time;
    
    FPopUpInfosStruct();
};

