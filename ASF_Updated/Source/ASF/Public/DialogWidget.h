#pragma once
#include "CoreMinimal.h"
#include "DialogWidget.generated.h"

class UPopUpWidgetTRC;

USTRUCT(BlueprintType)
struct FDialogWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopUpWidgetTRC* UserWidget;
    
    ASF_API FDialogWidget();
};

