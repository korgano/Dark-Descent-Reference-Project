#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UMGSlateWindowManager.generated.h"

class USceneCaptureComponent2D;
class UTexture2D;
class UTextureRenderTarget2D;
class UUMGSlateWindowComponent;

UCLASS(Blueprintable)
class ASF_API AUMGSlateWindowManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SignalLostTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UUMGSlateWindowComponent*> squadCameraWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneCaptureComponent2D*> cameraCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUMGSlateWindowComponent*> SlateWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTextureRenderTarget2D*> GeneratedCameraStreamRT;
    
    AUMGSlateWindowManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAllWindow();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSquadMemberCameraToWindows(int32 squadMemberID);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseScreen(int32 Monitor);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCameraCaptureRT();
    
    UFUNCTION(BlueprintCallable)
    bool IsSquadMemeberCameraOpen(int32 squadMemberID);
    
    UFUNCTION(BlueprintCallable)
    void InitMonitorInfo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSquadMemberCameraWindowID(int32 squadMemberID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAndTakeFreeScreen();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GenerateRenderTarget(FVector2D RTResolution);
    
    UFUNCTION(BlueprintCallable)
    void AddSquadMemberCameraToWindow(int32 squadMemberID, UUMGSlateWindowComponent* Window);
    
    UFUNCTION(BlueprintCallable)
    void ActivateRenderingCamera(const TArray<int32>& camreraID, bool IsActivated);
    
};

