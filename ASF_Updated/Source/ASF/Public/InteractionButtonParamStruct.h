#pragma once
#include "CoreMinimal.h"
#include "InteractionButtonParamStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInteractionButtonParamStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    ASF_API FInteractionButtonParamStruct();
};

