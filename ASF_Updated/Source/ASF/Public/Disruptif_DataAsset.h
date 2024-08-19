#pragma once
#include "CoreMinimal.h"
#include "StressEffect_DataAsset.h"
#include "Disruptif_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UDisruptif_DataAsset : public UStressEffect_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RawStressDamage;
    
    UDisruptif_DataAsset();

};

