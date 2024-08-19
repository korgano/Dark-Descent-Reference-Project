#pragma once
#include "CoreMinimal.h"
#include "Tinda_WidgetComponent.h"
#include "InteractionWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractionWidgetComponent : public UTinda_WidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayOnKeyboard;
    
    UInteractionWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

