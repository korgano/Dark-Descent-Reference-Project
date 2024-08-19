#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TraumaHandler_DataAsset.generated.h"

class UTrauma_DataAsset;

UCLASS(Blueprintable)
class ASF_API UTraumaHandler_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrauma_DataAsset*> PDA_Traumas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraumaPoint_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraumaLevel_Max;
    
    UTraumaHandler_DataAsset();

};

