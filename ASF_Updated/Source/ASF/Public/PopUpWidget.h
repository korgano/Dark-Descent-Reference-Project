#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Event_UPopUpWidgetDelegate.h"
#include "PopUpWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UPopUpWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Content;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UPopUpWidget OnPopUpClosed;
    
    UPopUpWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTitleAndContent(const FText& _Tilte, const FText& _Content);
    
};

