#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Interlude.h"
#include "InterludeDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UInterludeDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterlude> Interludes;
    
    UInterludeDataAsset();

};

