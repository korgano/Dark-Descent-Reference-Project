#pragma once
#include "CoreMinimal.h"
#include "Tinda_MenuUserWidget.h"
#include "ELoadMenuWidgetState.h"
#include "LoadingMenuWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API ULoadingMenuWidget : public UTinda_MenuUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadMenuWidgetState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportStarted;
    
public:
    ULoadingMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenImportDialogRequest(int32 InSelectedSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenImportDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloseImportDialog();
    
    UFUNCTION(BlueprintCallable)
    void ImportPS4Slot(int32 PS4SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPS4Saves() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnPS4SlotImported(bool bSuccess);
    
};

