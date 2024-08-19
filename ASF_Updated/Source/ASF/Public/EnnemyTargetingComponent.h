#pragma once
#include "CoreMinimal.h"
#include "POITargetingComponent.h"
#include "EnnemyTargetingComponent.generated.h"

class UAIPointOfInterestContainer;
class UEnemySightFeedbackComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UEnnemyTargetingComponent : public UPOITargetingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTickManagedByAnotherEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AsyncTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestContainer* USCM_POIContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnemySightFeedbackComponent> EnemySightFeedbackComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemySightFeedbackComponent* EnemySightFeedbackComponent;
    
public:
    UEnnemyTargetingComponent(const FObjectInitializer& ObjectInitializer);

};

