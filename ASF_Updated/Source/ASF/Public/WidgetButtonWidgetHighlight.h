#pragma once
#include "CoreMinimal.h"
#include "WidgetButtonWidgetHighlight.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FWidgetButtonWidgetHighlight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* parentHighlight;
    
    ASF_API FWidgetButtonWidgetHighlight();
};

