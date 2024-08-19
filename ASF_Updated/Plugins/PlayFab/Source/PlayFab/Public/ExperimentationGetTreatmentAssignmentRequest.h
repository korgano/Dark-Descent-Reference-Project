#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ExperimentationGetTreatmentAssignmentRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationGetTreatmentAssignmentRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Entity;
    
    FExperimentationGetTreatmentAssignmentRequest();
};

