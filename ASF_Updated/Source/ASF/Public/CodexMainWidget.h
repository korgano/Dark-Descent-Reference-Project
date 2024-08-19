#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Tinda_MenuUserWidget.h"
#include "CodexMainWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UCodexMainWidget : public UTinda_MenuUserWidget {
    GENERATED_BODY()
public:
    UCodexMainWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMenuVisible(bool _Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenCodexEntry(FGameplayTag _EntryTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MenuOptionSelected(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseCodexEntry();
    
};

