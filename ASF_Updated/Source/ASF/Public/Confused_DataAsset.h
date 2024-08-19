#pragma once
#include "CoreMinimal.h"
#include "StressEffect_DataAsset.h"
#include "Confused_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UConfused_DataAsset : public UStressEffect_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CPRegenMalus;
    
    UConfused_DataAsset();

};

