#pragma once
#include "CoreMinimal.h"
#include "EASFDialogType.h"
#include "PopUpWidget.h"
#include "PopUpWidgetTRC.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UPopUpWidgetTRC : public UPopUpWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EASFDialogType DialogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextOKButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextCancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelPressed;
    
    UPopUpWidgetTRC();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionFromControllerEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandlePopUpClosing();
    
private:
    UFUNCTION(BlueprintCallable)
    bool CanUnpause() const;
    
};

