#pragma once
#include "CoreMinimal.h"
#include "AnalyticEventAttribute.h"
#include "AnalyticEvent.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticEventAttribute> AnalyticEventAttributes;
    
    ASF_API FAnalyticEvent();
};

