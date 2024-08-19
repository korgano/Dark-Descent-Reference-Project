#pragma once
#include "CoreMinimal.h"
#include "AcknowVariants.h"
#include "Event_DataAsset.h"
#include "UEvent_Breakpoint_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UUEvent_Breakpoint_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants Step2Acknow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants Step3Acknow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants SafezoneBreachAcknow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants SafezoneBreachReactionAcknow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Step1Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Step2Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Step3Timer;
    
    UUEvent_Breakpoint_DataAsset();

};

