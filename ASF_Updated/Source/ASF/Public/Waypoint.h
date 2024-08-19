#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OpenDataWidget.h"
#include "Waypoint.generated.h"

class UDynamiqueSaveLoadComponent;
class UMapFeedbackDataProperties;
class UWaypointArrow_UserWidget;
class UWaypointComponent;
class UWaypointContainer_UserWidget;

UCLASS(Blueprintable)
class ASF_API AWaypoint : public AActor, public IOpenDataWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedbackDataProperties> MapFeedbackProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWaypointArrow_UserWidget> WaypointArrow_UserWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaypointContainer_UserWidget* WayPointContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaypointArrow_UserWidget* WaypointArrow_UserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamiqueSaveLoadComponent* DynamicSaveLoadComponent;
    
public:
    AWaypoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWaypointContainer_UserWidget* RequestNewContainer(UWaypointComponent* _WaypointComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaypointContainer_UserWidget* GetWaypointContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaypointArrow_UserWidget* GetWaypointArrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDynamiqueSaveLoadComponent* GetDynamicSaveLoadComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UWaypointArrow_UserWidget* CreateFeedbackArrow();
    

    // Fix for true pure virtual functions not being implemented
};

