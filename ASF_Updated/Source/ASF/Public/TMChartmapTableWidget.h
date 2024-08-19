#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TMChartmapTableWidget.generated.h"

class UMapFeedbackData_UserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UTMChartmapTableWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInStepToClose;
    
    UTMChartmapTableWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClickGamepadReveal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGrapnelWidgets(TArray<UMapFeedbackData_UserWidget*>& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayUpperSubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayDownerSubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close();
    
};

