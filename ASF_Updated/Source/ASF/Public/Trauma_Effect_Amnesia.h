#pragma once
#include "CoreMinimal.h"
#include "Trauma_Effect.h"
#include "Trauma_Effect_Amnesia.generated.h"

class UTrauma_DataAsset;

UCLASS(Blueprintable)
class ASF_API UTrauma_Effect_Amnesia : public UTrauma_Effect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrauma_DataAsset* Trauma_Amnesia_DataAsset;
    
    UTrauma_Effect_Amnesia();

};

