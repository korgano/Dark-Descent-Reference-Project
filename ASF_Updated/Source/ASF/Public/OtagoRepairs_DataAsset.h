#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OtagoRepairs_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UOtagoRepairs_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> ThrusterPartsCrewCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> ShieldPartsCrewCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> CryoChamberPartsCrewCasualties;
    
    UOtagoRepairs_DataAsset();

};

