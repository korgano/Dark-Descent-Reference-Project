#pragma once
#include "CoreMinimal.h"
#include "AIPointOfInterestComponent.h"
#include "EnumNavBlockerState.h"
#include "Event_UPOI_NavBlockerComponent_FGameplayTagDelegate.h"
#include "POI_NavBlockerComponent.generated.h"

class UInfluenceMapWeigherComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UPOI_NavBlockerComponent : public UAIPointOfInterestComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumNavBlockerState NavBlockerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInfluenceMapWeigherComponent* LinkedInfluenceMapWeigherComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UPOI_NavBlockerComponent_FGameplayTag OnNavBlockerSeen;
    
    UPOI_NavBlockerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLinkedInfluenceMapWeigherComponent(UInfluenceMapWeigherComponent* _LinkedInfluenceMapWeigherComponent);
    
};

