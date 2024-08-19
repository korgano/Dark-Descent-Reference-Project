#pragma once
#include "CoreMinimal.h"
#include "ResearchProject.generated.h"

USTRUCT(BlueprintType)
struct FResearchProject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingDuration;
    
    ASF_API FResearchProject();
};

