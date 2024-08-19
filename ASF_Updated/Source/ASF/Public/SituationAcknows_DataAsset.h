#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AcknowVariants.h"
#include "SituationAcknows_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USituationAcknows_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants BreachWarningAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants BreachReactionAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreachAcknowMaxDistanceFromDoor;
    
    USituationAcknows_DataAsset();

};

