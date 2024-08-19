#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tinda_WidgetComponent.h"
#include "MapInformationComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMapInformationComponent : public UTinda_WidgetComponent {
    GENERATED_BODY()
public:
    UMapInformationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitMapInformationComponent(UTexture2D* _MapFeedbackTexture, FLinearColor _Color);
    
};

