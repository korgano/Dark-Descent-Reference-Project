#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SlateWindowComponent.generated.h"

class ASlateWindowManager;
class UTexture2D;
class UTextureRenderTarget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USlateWindowComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASlateWindowManager* SlateWindowManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMultiCameraWindowInit;
    
    USlateWindowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSlateWindow(const TArray<int32>& camreraID, TArray<UTextureRenderTarget*> cameraTexture, FVector2D cameraResolution);
    
    UFUNCTION(BlueprintCallable)
    void SetManager(ASlateWindowManager* slateManager);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocalVariable();
    
    UFUNCTION(BlueprintCallable)
    void InitSlateWindow(const TArray<int32>& camreraID, TArray<UTextureRenderTarget*> cameraTexture, UTexture2D* SignalLostTexture, FVector2D cameraResolution);
    
    UFUNCTION(BlueprintCallable)
    void DestroyComponent_Internal();
    
    UFUNCTION(BlueprintCallable)
    void ActivateRenderingCamera(const TArray<int32>& camreraID, bool IsActivated);
    
};

