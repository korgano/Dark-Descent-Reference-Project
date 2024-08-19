#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TMMainWidget.generated.h"

class AHumanoidMarine;
class APlayerController;
class UCanvasPanel;
class UInteractiveComponent_Search;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UTMMainWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UTMMainWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowInventorySwap(UInteractiveComponent_Search* SearchComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBlackScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideInventorySwap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UUserWidget* GetMarineCard(AHumanoidMarine* Marine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCanvasPanel* GetBaseCanvasPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseInteractionMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cheat_SetMouseLocationWidget(bool Display, APlayerController* PlayerController);
    
};

