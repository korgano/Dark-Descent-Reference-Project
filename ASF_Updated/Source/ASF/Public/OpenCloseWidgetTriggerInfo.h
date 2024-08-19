#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "OpenCloseWidgetTriggerInfo.generated.h"

class UWidget;

UCLASS(Blueprintable)
class ASF_API UOpenCloseWidgetTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Open;
    
    UOpenCloseWidgetTriggerInfo();

};

