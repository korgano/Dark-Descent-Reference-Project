#pragma once
#include "CoreMinimal.h"
#include "AnalyticEventAttribute.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticEventAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ASF_API FAnalyticEventAttribute();
};

