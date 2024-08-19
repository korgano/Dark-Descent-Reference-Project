#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AI_POIPerceptionComponent.h"
#include "EnumPOIResearchType.h"
#include "Templates/SubclassOf.h"
#include "POIPerception_GameMode.generated.h"

class UPOIDefaultContainer;
class URoomClusterFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UPOIPerception_GameMode : public UAI_POIPerceptionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoomClusterFilter> ClusterFilter;
    
public:
    UPOIPerception_GameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetClusterFilter(TSubclassOf<URoomClusterFilter> _ClusterFilter);
    
protected:
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* FindSquadMarineOutSafeZone();
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* FindEnemiesInSafeZone();
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* FindAvailableSpawnPoint(FGameplayTag _PerceptionSense, EnumPOIResearchType _RunMode);
    
};

