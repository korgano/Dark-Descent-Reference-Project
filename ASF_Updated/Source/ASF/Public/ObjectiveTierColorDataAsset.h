#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ObjectiveTierColorData.h"
#include "ObjectiveTierColorDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UObjectiveTierColorDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveTierColorData PrimaryObjectiveColorDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveTierColorData SecondaryObjectiveColorDatas;
    
public:
    UObjectiveTierColorDataAsset();

};

