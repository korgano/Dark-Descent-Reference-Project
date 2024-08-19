#pragma once
#include "CoreMinimal.h"
#include "Tinda_MenuUserWidget.h"
#include "TMInspectSquadWidget.generated.h"

class AHumanoid;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UTMInspectSquadWidget : public UTinda_MenuUserWidget {
    GENERATED_BODY()
public:
    UTMInspectSquadWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelectedMarine(AHumanoid* Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitWidget();
    
};

