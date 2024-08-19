#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Geek_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UGeek_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConsoleInteractionDurationMultiplier;
    
    UGeek_DataAsset();

};

