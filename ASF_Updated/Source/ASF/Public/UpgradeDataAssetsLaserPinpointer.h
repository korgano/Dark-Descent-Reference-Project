#pragma once
#include "CoreMinimal.h"
#include "UpgradeDataAssets.h"
#include "UpgradeDataAssetsLaserPinpointer.generated.h"

UCLASS(Blueprintable)
class ASF_API UUpgradeDataAssetsLaserPinpointer : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float armorMinimumToTriggerEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float armorModification;
    
    UUpgradeDataAssetsLaserPinpointer();

};

