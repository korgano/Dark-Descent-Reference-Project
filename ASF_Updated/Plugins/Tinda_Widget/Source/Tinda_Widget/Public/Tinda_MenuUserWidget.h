#pragma once
#include "CoreMinimal.h"
#include "Event_MenuUserWidgetDelegate.h"
#include "Tinda_UserWidget.h"
#include "Tinda_MenuUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TINDA_WIDGET_API UTinda_MenuUserWidget : public UTinda_UserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_MenuUserWidget OnCloseRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_MenuUserWidget OnSubMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_MenuUserWidget OnSubMenuClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bindMenuInputs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMenuOpen;
    
public:
    UTinda_MenuUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseWidget();
    
};

