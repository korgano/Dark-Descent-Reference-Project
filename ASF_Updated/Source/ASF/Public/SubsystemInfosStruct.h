#pragma once
#include "CoreMinimal.h"
#include "SubsystemInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FSubsystemInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OnlineSubsystemInfos;
    
    FSubsystemInfosStruct();
};

