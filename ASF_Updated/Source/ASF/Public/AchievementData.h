#pragma once
#include "CoreMinimal.h"
#include "EAchievement.h"
#include "AchievementData.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FAchievementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAchievement AchievementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    FAchievementData();
};

