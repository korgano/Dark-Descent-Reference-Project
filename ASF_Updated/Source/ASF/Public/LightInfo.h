#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LightColor;
    
    ASF_API FLightInfo();
};

