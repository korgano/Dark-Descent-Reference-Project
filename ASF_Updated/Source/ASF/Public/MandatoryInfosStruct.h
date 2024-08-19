#pragma once
#include "CoreMinimal.h"
#include "MandatoryInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FMandatoryInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 campaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mission_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString floor_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mission_tries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString last_load_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double time_since_mission_started;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double time_on_this_current_save;
    
    FMandatoryInfosStruct();
};

