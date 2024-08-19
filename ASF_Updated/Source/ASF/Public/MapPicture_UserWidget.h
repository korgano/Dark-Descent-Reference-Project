#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "LevelObjectSaveStruct.h"
#include "LevelOpenDataSaveStruct.h"
#include "Templates/SubclassOf.h"
#include "MapPicture_UserWidget.generated.h"

class AActor;
class UCanvasPanel;
class ULevelSaveGame;
class UMapFeedbackDataContainer;
class UMapFeedbackDataProperties;
class UMapFeedbackData_StaticObject;
class UMapFeedbackData_UserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UMapPicture_UserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapFeedbackDataCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveGame* LevelSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionName;
    
public:
    UMapPicture_UserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveMotionTracker(UMapFeedbackData_UserWidget* MotionTrackerWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetConstructed();
    
    UFUNCTION(BlueprintCallable)
    void NativeDestruct();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void FillWidgetContainer(FName _LevelName, FName _SubLevelName, bool _bIsDisplayed, UMapFeedbackDataContainer* _WidgetContainer);
    
    UFUNCTION(BlueprintCallable)
    UMapFeedbackData_StaticObject* ConstructStaticObject(TSubclassOf<UMapFeedbackData_UserWidget> _StaticObjectClass, const FLevelOpenDataSaveStruct& _LevelOpenData, const FLevelObjectSaveStruct& _SavedObject, AActor* _Owner, UMapFeedbackDataContainer* _MapFeedbackDataContainer, UMapFeedbackDataProperties* _MapFeedbackDataProperties, FName _SubLevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddMotionTracker(UMapFeedbackData_UserWidget* MotionTrackerWidget, FVector4 MotionTrackerCoordinate, bool MovingMotionTracker);
    
};

