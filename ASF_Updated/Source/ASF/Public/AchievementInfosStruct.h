#pragma once
#include "CoreMinimal.h"
#include "AchievementInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FAchievementInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString achievement_id;
    
    FAchievementInfosStruct();
};

