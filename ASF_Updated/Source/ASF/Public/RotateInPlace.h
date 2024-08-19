#pragma once
#include "CoreMinimal.h"
#include "RotateInPlace.generated.h"

USTRUCT(BlueprintType)
struct FRotateInPlace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRootMotion;
    
    ASF_API FRotateInPlace();
};

