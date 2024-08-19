#pragma once
#include "CoreMinimal.h"
#include "EnumSquadStatus.h"
#include "Trait_DataAsset.h"
#include "Bully_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UBully_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EnumSquadStatus> SquadStatus;
    
    UBully_DataAsset();

};

