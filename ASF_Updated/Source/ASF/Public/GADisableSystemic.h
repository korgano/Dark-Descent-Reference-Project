#pragma once
#include "CoreMinimal.h"
#include "DisableFactionParams.h"
#include "GASystemicActivation.h"
#include "GADisableSystemic.generated.h"

UCLASS(Blueprintable)
class ASF_API UGADisableSystemic : public UGASystemicActivation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableShelter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDisableFactionParams> DisableFactions;
    
    UGADisableSystemic();

};

