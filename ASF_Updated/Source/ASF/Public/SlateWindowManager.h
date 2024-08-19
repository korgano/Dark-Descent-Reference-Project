#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlateWindowManager.generated.h"

class USceneCaptureComponent;
class USlateWindowComponent;

UCLASS(Blueprintable)
class ASF_API ASlateWindowManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneCaptureComponent*> cameraCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USlateWindowComponent*> SlateWindows;
    
    ASlateWindowManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReleaseScreen(int32 Monitor);
    
    UFUNCTION(BlueprintCallable)
    void InitMonitorInfo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAndTakeFreeScreen();
    
    UFUNCTION(BlueprintCallable)
    void ActivateRenderingCamera(const TArray<int32>& camreraID, bool IsActivated);
    
};

