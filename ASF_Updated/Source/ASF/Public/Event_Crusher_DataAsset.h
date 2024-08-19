#pragma once
#include "CoreMinimal.h"
#include "AcknowVariants.h"
#include "Event_DataAsset.h"
#include "Event_Crusher_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_Crusher_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants CrusherCloseScreamAcknow;
    
    UEvent_Crusher_DataAsset();

};

