#pragma once
#include "CoreMinimal.h"
#include "EnableFactionParams.h"
#include "GASystemicActivation.h"
#include "GAEnableSystemic.generated.h"

UCLASS(Blueprintable)
class ASF_API UGAEnableSystemic : public UGASystemicActivation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableShelter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnableFactionParams> EnableFactions;
    
    UGAEnableSystemic();

};

