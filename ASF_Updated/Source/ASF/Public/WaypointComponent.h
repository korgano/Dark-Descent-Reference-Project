#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WaypointComponent.generated.h"

class UWaypointArrow_UserWidget;
class UWaypointContainer_UserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UWaypointComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWaypointContainer_UserWidget> WaypointContainer_UserWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWaypointContainer_UserWidget*> WaypointContainers_HardReference;
    
public:
    UWaypointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWaypointContainer_UserWidget* GetWaypointContainer(const TSoftClassPtr<UWaypointArrow_UserWidget>& _ArrowWidgetClass) const;
    
    UFUNCTION(BlueprintCallable)
    UWaypointContainer_UserWidget* CreateWaypointContainer(const TSoftClassPtr<UWaypointArrow_UserWidget>& _ArrowWidgetClass);
    
};

