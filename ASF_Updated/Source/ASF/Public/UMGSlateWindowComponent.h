#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Event_OnSlateWindowUpdatedDelegate.h"
#include "Event_OnUMGBuiltDelegate.h"
#include "Event_SlateWindowEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "UMGSlateWindowComponent.generated.h"

class AUMGSlateWindowManager;
class UTexture2D;
class UTextureRenderTarget2D;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UUMGSlateWindowComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> slateUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUMGSlateWindowManager* SlateWindowManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMultiCameraWindowInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DisplayedCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D cameraDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* createdWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_OnUMGBuilt OnUMGBuilt;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_OnSlateWindowUpdated UpdateSlateWindowUMG;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SlateWindowEvent OnCloseSlateWindow;
    
    UUMGSlateWindowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSlateWindow(const TArray<int32>& camreraID, const TArray<UTextureRenderTarget2D*>& cameraTexture, FVector2D cameraResolution);
    
    UFUNCTION(BlueprintCallable)
    void SetManager(AUMGSlateWindowManager* slateManager);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocalVariable();
    
    UFUNCTION(BlueprintCallable)
    void InitSlateWindow(const TArray<int32>& camreraID, const TArray<UTextureRenderTarget2D*>& cameraTexture, UTexture2D* SignalLostTexture, FVector2D cameraResolution);
    
    UFUNCTION(BlueprintCallable)
    void DestroyComponent_Internal();
    
};

