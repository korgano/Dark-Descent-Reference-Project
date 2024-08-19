#pragma once
#include "CoreMinimal.h"
#include "Tinda_UserWidget.h"
#include "Overlay_Widget.generated.h"

class UStateIcon_Widget;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UOverlay_Widget : public UTinda_UserWidget {
    GENERATED_BODY()
public:
    UOverlay_Widget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetStates(TArray<UStateIcon_Widget*>& States);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UTinda_UserWidget* GetInteracting();
    
};

