#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EnumWaypointDisplayType.h"
#include "WaypointArrow_UserWidget.generated.h"

class AWaypoint;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UWaypointArrow_UserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaypoint* Waypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumWaypointDisplayType WaypointDisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathPointToWayPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IntermediatePoint;
    
public:
    UWaypointArrow_UserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESlateVisibility UpdateVisibility(bool _Visibility);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextPointVisible(const FVector& _Start, const FVector& _End) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void InitWaypointArrow(AWaypoint* _Waypoint);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumWaypointDisplayType GetWaypointDisplayType() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComputeRotation();
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector ComputeIntermediateWaypoint();
    
public:
    UFUNCTION(BlueprintCallable)
    void ComputeDistance();
    
    UFUNCTION(BlueprintCallable)
    void BeginWaypointArrowUpdate();
    
};

