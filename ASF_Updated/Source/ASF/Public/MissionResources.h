#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionResources.generated.h"

USTRUCT(BlueprintType)
struct FMissionResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer XenoTechProjects;
    
    ASF_API FMissionResources();
};

