#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DeathClock_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UDeathClock_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialTimeAllotment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostNuclearProtocolTimeAllotment;
    
    UDeathClock_DataAsset();

};

