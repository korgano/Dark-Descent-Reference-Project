#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "TMMapWidget.generated.h"

class AActor;
class ASecurityCamera;
class UMapFeedbackData_UserWidget;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UTMMapWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTMMapWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchObjectiveMenu(bool ClockWise);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchMissionTab(bool Next);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestScollPanelMenu(bool ScrollUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PredMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenCodexMenu(const FGameplayTag& EntryTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenCameraView(AActor* cameraReference);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NextMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsOnObjectifColumn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ASecurityCamera* GetSecurityCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UMaterialInstanceDynamic* GetMapMID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGrapnelWidgets(TArray<UMapFeedbackData_UserWidget*>& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayUpperSubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayDownerSubLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearFOWMinimap(bool bOnlyMinimap, bool bCurrentSubLevel, const FName& SubLevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeDisplayedSubLevel(const FString& SubLevel, bool bRealoadMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddEventList(UUserWidget* EventList);
    
};

