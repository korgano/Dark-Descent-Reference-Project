#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Event_TMEndMissionWidget_OnQuitDelegate.h"
#include "Event_TMEndMissionWidget_OnReturnToMainDelegate.h"
#include "TMEndMissionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UTMEndMissionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TMEndMissionWidget_OnReturnToMain OnReturnToMainMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TMEndMissionWidget_OnQuit OnQuit;
    
    UTMEndMissionWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseEndPanel(bool bUpdateIsOpen);
    
};

