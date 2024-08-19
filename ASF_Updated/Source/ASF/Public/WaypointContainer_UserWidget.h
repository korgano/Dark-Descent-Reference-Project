#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WaypointContainer_UserWidget.generated.h"

class AWaypoint;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UWaypointContainer_UserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWaypoint*> Waypoints;
    
public:
    UWaypointContainer_UserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveWayPoint(AWaypoint* _PointToDelete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWaypoint*> GetWaypoints();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddWayPoint(AWaypoint* _NewPoint);
    
};

