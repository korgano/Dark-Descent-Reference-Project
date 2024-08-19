#pragma once
#include "CoreMinimal.h"
#include "BuildingIDName.h"
#include "SubLevelID.h"
#include "RoofFadingInfo.generated.h"

USTRUCT(BlueprintType)
struct FRoofFadingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID LevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingIDName BuildingID;
    
    ASF_API FRoofFadingInfo();
};

