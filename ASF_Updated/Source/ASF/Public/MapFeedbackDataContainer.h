#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EnumFeedbackDataType.h"
#include "Event_UMapFeedbackDataContainerDelegate.h"
#include "Event_UMapFeedbackDataContainer_UMapFeedbackData_UserWidgetDelegate.h"
#include "MapFeedbackDataContainer.generated.h"

class AActor;
class UCanvasPanel;
class ULevelSaveGame;
class UMapFeedbackData_UserWidget;

UCLASS(Blueprintable)
class ASF_API UMapFeedbackDataContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* WidgetsCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapFeedbackData_UserWidget*> OpenDataWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapFeedbackData_UserWidget*> DynamicObjectWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapFeedbackData_UserWidget*> MovingObjectWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCurrentSubLevelContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveGame* LevelSaveGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UMapFeedbackDataContainer OnWidgetsConstructed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UMapFeedbackDataContainer_UMapFeedbackData_UserWidget OnWidgetPositionUpdate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapFeedbackData_UserWidget*> GrapnelWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UMapFeedbackData_UserWidget*> ConstructedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UMapFeedbackData_UserWidget*> ConstructedDynamicWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UObject*, UMapFeedbackData_UserWidget*> ConstructedMovingWidgets;
    
public:
    UMapFeedbackDataContainer();

    UFUNCTION(BlueprintCallable)
    void UpdateWifgetPosition(UMapFeedbackData_UserWidget* MapFeedbackData_UserWidget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGrapnelWidget(UMapFeedbackData_UserWidget* GrapnelWidget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWidgetToContainer(FName _ObjectName, UMapFeedbackData_UserWidget* _MapFeedbackData_UserWidget, bool _bIsMapped);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMovingWidgetToContainer(UObject* WidgetOwner, UMapFeedbackData_UserWidget* _MapFeedbackData_UserWidget, bool _bIsMapped);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDynamicWidgetToContainer(AActor* WidgetOwner, UMapFeedbackData_UserWidget* _MapFeedbackData_UserWidget, bool _bIsMapped);
    
    UFUNCTION(BlueprintCallable)
    UMapFeedbackData_UserWidget* GetWidgetByName(FName _ObjectName);
    
    UFUNCTION(BlueprintCallable)
    UMapFeedbackData_UserWidget* GetMovingWidget(UObject* WidgetOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMapFeedbackData_UserWidget*> GetGrapnelWidgets() const;
    
    UFUNCTION(BlueprintCallable)
    UMapFeedbackData_UserWidget* GetDynamicWidget(AActor* WidgetOwner);
    
    UFUNCTION(BlueprintCallable)
    void DisplayWidgets(bool _bIsDisplay);
    
    UFUNCTION(BlueprintCallable)
    void DestroyMovingWidget(UObject* WidgetOwner);
    
    UFUNCTION(BlueprintCallable)
    void DestroyDynamicWidget(AActor* WidgetOwner);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllWidget();
    
    UFUNCTION(BlueprintCallable)
    void ChangeWidgetCategory(UMapFeedbackData_UserWidget* _MapFeedbackData_UserWidget, EnumFeedbackDataType _FeedbackType);
    
    UFUNCTION(BlueprintCallable)
    void AddGrapnelWidget(UMapFeedbackData_UserWidget* GrapnelWidget);
    
};

