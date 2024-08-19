#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "BuildingIDName.h"
#include "Event_SecurityCameraDelegate.h"
#include "ObjectWithBuildingInfoInterface.h"
#include "SecurityCamera.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ASF_API ASecurityCamera : public AActorWithGameplayTag, public IObjectWithBuildingInfoInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCameraActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SecurityCamera CameraActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderInUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ButtonTriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActionAuthorized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bButtonActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SecurityCamera OnActionAuthorized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingIDName BuildingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIndoorCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    ASecurityCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetCameraTransform() const;
    
    UFUNCTION(BlueprintCallable)
    void AuthorizeCameraAction();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void GetBuildingIDName(FBuildingIDName& _FBuildingIDName) const override PURE_VIRTUAL(GetBuildingIDName,);
    
};

