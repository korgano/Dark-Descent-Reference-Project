#pragma once
#include "CoreMinimal.h"
#include "MissionStartedInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FMissionStartedInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString deployment_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> marines_id;
    
    FMissionStartedInfosStruct();
};

