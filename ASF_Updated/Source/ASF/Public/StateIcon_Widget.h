#pragma once
#include "CoreMinimal.h"
#include "Tinda_UserWidget.h"
#include "StateIcon_Widget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UStateIcon_Widget : public UTinda_UserWidget {
    GENERATED_BODY()
public:
    UStateIcon_Widget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCancelable();
    
};

