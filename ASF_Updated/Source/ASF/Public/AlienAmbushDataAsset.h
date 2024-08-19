#pragma once
#include "CoreMinimal.h"
#include "AmbushDataAsset.h"
#include "AlienAmbushDataAsset.generated.h"

class UAcknow_DataAsset;
class USoundBase;

UCLASS(Blueprintable)
class ASF_API UAlienAmbushDataAsset : public UAmbushDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundBase>> AlienHissSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAcknow_DataAsset* AlienHissReactionAcknow;
    
    UAlienAmbushDataAsset();

};

