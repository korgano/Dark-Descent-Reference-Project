#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "Event_AInGameCamera_BoolDelegate.h"
#include "Event_FocusCamDelegate.h"
#include "SavedActorInterface.h"
#include "InGameCamera.generated.h"

class AActor;
class UCamera_Tactical_DataAsset;

UCLASS(Blueprintable)
class ASF_API AInGameCamera : public APawn, public ISavedActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTransform SavedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorGrabbed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AInGameCamera_Bool OnChangedAspectRatio;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AInGameCamera_Bool OnIndoorBoundaryHitChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AInGameCamera_Bool OnFocusActorEventUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorToOrientCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeMinBeforeForceRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLagForceRotation;
    
public:
    AInGameCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetZoom(float ArmLenghtTarget, bool IgnoreDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeMinBeforeForceRotationAndCameraLag(float _TimeMinBeforeForceRotation, float _CameraLagForceRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCameraArmLength(float _NewArmLength);
    
    UFUNCTION(BlueprintCallable)
    void SetActorToOrientCam(AActor* _NewActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActorToFocus(AActor* ActorToFocus, bool SetFirstLocation);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEventForOrientCam(FEvent_FocusCam EventToCall);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEventForFocusCam(FEvent_FocusCam EventToCall);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideZoomValues(bool _bResetToDefault, float Zoom_Indoor_Min, float Zoom_Indoor_Max, float Zoom_Outdoor_Min, float Zoom_Outdoor_Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitZoom();
    
    UFUNCTION(BlueprintCallable)
    void InitCameraPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnOrientCamEventBound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnFocusCamEventBound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeMinBeforeForceRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetTargetArmMinMax(float& Min, float& Max);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetGamepadCursorRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UCamera_Tactical_DataAsset* GetCameraPDA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraLagForceRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetCameraArmLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorToOrientCam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceZoom(float ArmLenghtTarget, bool IgnoreDelay, bool bOverideZoomLagValue, float OveriddedZoomLagValue);
    
    UFUNCTION(BlueprintCallable)
    void ClearEventOrientCam();
    
    UFUNCTION(BlueprintCallable)
    void ClearEventFocusCam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeAspectRatio(bool _bConstraintAspectRatio, float _Value);
    
    UFUNCTION(BlueprintCallable)
    void CallOrientCam();
    
    UFUNCTION(BlueprintCallable)
    void CallFocusCam();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool SavedActorInterface_IsInitialized() override PURE_VIRTUAL(SavedActorInterface_IsInitialized, return false;);
    
    UFUNCTION()
    void SavedActorInterface_BindOnInitialized() override PURE_VIRTUAL(SavedActorInterface_BindOnInitialized,);
    
};

