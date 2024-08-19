#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Overlay_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UOverlay_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gamepad_DelayBetweenBrowseButton;
    
    UOverlay_DataAsset();

};

