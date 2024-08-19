#pragma once
#include "CoreMinimal.h"
#include "ResearchProjectBranch.generated.h"

class UBM_ResearchProject_DataAsset;

USTRUCT(BlueprintType)
struct FResearchProjectBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBM_ResearchProject_DataAsset*> Projects;
    
    ASF_API FResearchProjectBranch();
};

