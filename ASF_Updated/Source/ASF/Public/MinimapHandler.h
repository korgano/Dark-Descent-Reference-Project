#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Callback_AMinimapHandler_FName_FName_UMaterialInstanceDynamicDelegate.h"
#include "Callback_AMinimapHandler_FVector2D_FloatDelegate.h"
#include "Callback_AMinimapHandler_WaypointDelegate.h"
#include "EMinimapType.h"
#include "Event_AMinimapHandlerDelegate.h"
#include "Event_AMinimapHandler_AActorDelegate.h"
#include "Event_AMinimapHandler_AActor_FLevelDynamicObjectSaveStructDelegate.h"
#include "Event_AMinimapHandler_UMapFeedbackDataComponentDelegate.h"
#include "Event_AMinimapHandler_floatDelegate.h"
#include "LevelDynamicObjectSaveStruct.h"
#include "MinimapHandler.generated.h"

class AASFGameModeBase_TacticalMode;
class ASubLevelHandler;
class UCanvasPanelSlot;
class UMapFeedbackDataComponent;
class UMapFeedbackData_UserWidget;
class UMapPicture_UserWidget;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
class UObject;
class USubLevelPrimaryDataAsset;
class UWidget;

UCLASS(Blueprintable)
class ASF_API AMinimapHandler : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MTMinimapZoomMultiplier;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AMinimapHandler OnMinimapReadyForUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallback_AMinimapHandler_FVector2D_Float OnMinimapUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallback_AMinimapHandler_FName_FName_UMaterialInstanceDynamic OnMinimapInformationUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AMinimapHandler_float OnRenderScaleUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MapImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapPicture_UserWidget* MapPicture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* MapTexturePanelSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMinimapType MinimapType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSubLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanFocusObjectif;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnObjectifColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapFeedbackData_UserWidget* OverredUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMinimapZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ZoomMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MapBoundWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapWorldCenterPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UVOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MapWorldCurrentPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenderScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MinimapLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MinimapSubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapFeedbackData_UserWidget* HoveredWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubLevelPrimaryDataAsset* MinimapSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapShader;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* Collection;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FVector4> SubObjectifArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AMinimapHandler_AActor_FLevelDynamicObjectSaveStruct OnDynamicObjectLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AMinimapHandler_AActor OnDynamicObjectDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AMinimapHandler_UMapFeedbackDataComponent OnMovingObjectInstantiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AMinimapHandler_UMapFeedbackDataComponent OnMovingObjectDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallback_AMinimapHandler_Waypoint OnSelected_APCWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayFrustumOnMap_Cheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayFrustumUV_Cheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayFrustumWithShader_Cheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapFeedbackData_UserWidget* CameraFrustumMovingObject;
    
    AMinimapHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D WorldToMinimapUV(FVector Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D Vector_WorldToMinimapUV(FVector Vector) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateRenderScale();
    
    UFUNCTION(BlueprintCallable)
    FVector2D UpdateMTMinimapShaderOffset(UMaterialParameterCollection* _Collection, FVector _WorldPos, FVector2D _MapPlanSize, FVector2D _MapWorldCenterPos, float _Zoom);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMapSpeed();
    
    UFUNCTION(BlueprintCallable)
    FVector2D UpdateMapShaderOffset(FVector _WorldPos, FVector2D _MapPlanSize, FVector2D _MapWorldCenterPos, float _Zoom);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMapInformation(FName _MinimapCurrentLevel, FName _MinimapCurrentSubLevel, UMaterialInstanceDynamic* _MapShader, bool _ResetPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetOverredUserWidget(UMapFeedbackData_UserWidget* _OverredUserWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetMTMinimapZoomMultiplier(const float _MTMinimapZoomMultiplier);
    
    UFUNCTION(BlueprintCallable)
    FVector2D SetMapShaderOffset(FVector _WorldPos);
    
    UFUNCTION(BlueprintCallable)
    void SetMapBoundaryWidget(UWidget* _MapBoundWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetIncomingMinimapType(EMinimapType _MinimapType);
    
    UFUNCTION(BlueprintCallable)
    void SetHoveredWidget(UMapFeedbackData_UserWidget* _HoveredWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultMapName(FName _MinimapLevelName, FName _MinimapSubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void RequestMinimapUpdate();
    
    UFUNCTION(BlueprintCallable)
    void RemoveObjectifArea(UObject* _ObjectifUserWidget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMovingObject(UMapFeedbackDataComponent* _MovingObject);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDynamicObject(AActor* _DynamicObjectActor);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseMinimap();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelUnload(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitMinimap(UMapPicture_UserWidget* _MapPicture, UCanvasPanelSlot* _MapTexturePanelSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetWidgetCoordinateForZoom(FVector WidgetWorldPosition, float _Zoom) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetWidgetCoordinate(FVector WidgetWorldPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRenderScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapFeedbackData_UserWidget* GetOverredUserWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMTMinimapZoomMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimapZoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMinimapSubLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USubLevelPrimaryDataAsset* GetMinimapSubLevelDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMinimapLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMapWorldCurrentPos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapWorldCenterPos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapPicture_UserWidget* GetMapPicture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOnObjectifColumn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetGeometryCenteredAABB(TArray<FVector> _Vertices, float _AABBoffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetGeometryAABB(TArray<FVector> _Vertices, float _AABBoffset, bool _SquareAABB) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector2D> GetAABBWidgetCoordinate(const FBox& _AABB) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableHandleInput(bool _IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMapPicture_UserWidget* CreateOrGetMapPicture();
    
    UFUNCTION(BlueprintCallable)
    void BlockNextObjectifFocus();
    
    UFUNCTION(BlueprintCallable)
    void AddObjectifArea(UObject* _ObjectifUserWidget, const FVector4& _ObjectifAreaCoordinate);
    
    UFUNCTION(BlueprintCallable)
    void AddMovingObject(UMapFeedbackDataComponent* _MovingObject);
    
    UFUNCTION(BlueprintCallable)
    void AddDynamicObject(AActor* _DynamicObjectActor, FLevelDynamicObjectSaveStruct& _DynamicObjectStruct);
    
};

