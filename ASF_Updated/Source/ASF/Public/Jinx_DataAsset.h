#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Jinx_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UJinx_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecentageChanceToJamWeapon;
    
    UJinx_DataAsset();

};

