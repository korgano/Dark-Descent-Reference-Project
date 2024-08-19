#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Event_DatapadWidget_OnCloseDelegate.h"
#include "DatapadWidget.generated.h"

class UDataPad_DataAsset;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UDatapadWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataPad_DataAsset* DataPad;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DatapadWidget_OnClose OnClose;
    
    UDatapadWidget();

};

