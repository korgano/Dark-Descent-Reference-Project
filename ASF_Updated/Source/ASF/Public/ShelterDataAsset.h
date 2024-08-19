#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShelterDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UShelterDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HealStressDefault_Txt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MarineLifeHeal_Txt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarineLifeHeal_Percentage_Target;
    
    UShelterDataAsset();

};

