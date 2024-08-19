#pragma once
#include "CoreMinimal.h"
#include "Tinda_WidgetComponent.h"
#include "ASF_WidgetComponent.generated.h"

class AASFPlayerController;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASF_WidgetComponent : public UTinda_WidgetComponent {
    GENERATED_BODY()
public:
    UASF_WidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCinematicActivationUpdated(AASFPlayerController* InPlayerController, bool InValue);
    
};

