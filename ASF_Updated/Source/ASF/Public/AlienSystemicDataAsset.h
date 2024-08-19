#pragma once
#include "CoreMinimal.h"
#include "SystemicDataAsset.h"
#include "AlienSystemicDataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UAlienSystemicDataAsset : public USystemicDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HuntStartedBroadcastText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HuntStoppedBroadcastText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AggressivenessSegmentMassiveOnslaughtText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AggressivenessSegmentBossText;
    
    UAlienSystemicDataAsset();

};

