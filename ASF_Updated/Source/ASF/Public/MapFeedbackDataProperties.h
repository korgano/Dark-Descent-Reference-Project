#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "MapFeedbackDataProperties.generated.h"

class UMapFeedbackData_UserWidget;

UCLASS(Blueprintable)
class ASF_API UMapFeedbackDataProperties : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapFeedbackData_UserWidget> MinimapUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWidgetShouldBeMapped;
    
    UMapFeedbackDataProperties();

};

