#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EResourceMissionRequirementType.h"
#include "ResourceMissionRequirement.generated.h"

USTRUCT(BlueprintType)
struct FResourceMissionRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResourceMissionRequirementType RequirementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RequirementTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredValue;
    
    ASF_API FResourceMissionRequirement();
};

