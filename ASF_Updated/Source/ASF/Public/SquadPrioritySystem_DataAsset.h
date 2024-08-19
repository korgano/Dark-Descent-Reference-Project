#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SquadPrioritySystem_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USquadPrioritySystem_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeaderMalus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TieValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WoundMalusForHealInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDisplay;
    
    USquadPrioritySystem_DataAsset();

};

