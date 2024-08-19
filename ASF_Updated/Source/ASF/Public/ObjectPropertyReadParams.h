#pragma once
#include "CoreMinimal.h"
#include "EnumObjectPropertyReadType.h"
#include "ObjectPropertyReadParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FObjectPropertyReadParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumObjectPropertyReadType ReadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ClassHoldingPropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ObjectHoldingPropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ValuePropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    ASF_API FObjectPropertyReadParams();
};

