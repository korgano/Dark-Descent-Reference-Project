#pragma once
#include "CoreMinimal.h"
#include "Event_DataAsset.h"
#include "Event_GenericOnslaught_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_GenericOnslaught_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventSidePanelTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventSidePanelTimerActiveTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventSidePanelTimerInactiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OnslaughtStartedEventBroadcastText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OnslaughtEndedEventBroadcastText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AggressivenessTitleText;
    
    UEvent_GenericOnslaught_DataAsset();

};

