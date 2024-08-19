#pragma once
#include "CoreMinimal.h"
#include "BuildingIDName.generated.h"

USTRUCT(BlueprintType)
struct FBuildingIDName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString BuildingIDName;
    
    ASF_API FBuildingIDName();
};

