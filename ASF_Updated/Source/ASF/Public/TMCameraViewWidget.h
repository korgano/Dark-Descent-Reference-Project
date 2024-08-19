#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnGoToMapDelegate.h"
#include "TMCameraViewWidget.generated.h"

class ASecurityCamera;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UTMCameraViewWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoToMap OnGoToMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASecurityCamera* cameraReference;
    
    UTMCameraViewWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Start(ASecurityCamera* Camera);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseCameraViewFromBackButton();
    
};

