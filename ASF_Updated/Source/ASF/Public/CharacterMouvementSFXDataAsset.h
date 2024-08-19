#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterMouvementSFXDataAsset.generated.h"

class UPhysicalMaterial;
class USoundCue;

UCLASS(Blueprintable)
class ASF_API UCharacterMouvementSFXDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UPhysicalMaterial>, TSoftObjectPtr<USoundCue>> WalkStepSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UPhysicalMaterial>, TSoftObjectPtr<USoundCue>> RunStepSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UPhysicalMaterial>, TSoftObjectPtr<USoundCue>> DismemberCrawSFX;
    
    UCharacterMouvementSFXDataAsset();

};

