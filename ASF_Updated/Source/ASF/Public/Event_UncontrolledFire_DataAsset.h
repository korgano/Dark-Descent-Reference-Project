#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AcknowVariants.h"
#include "Event_DataAsset.h"
#include "Event_UncontrolledFire_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_UncontrolledFire_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbAlienSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Trigger_NbAlienOnMap_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Trigger_Percentage_StressMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InvalidTagOnMarine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants JumpscareAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowVariants ReactionAcknows;
    
    UEvent_UncontrolledFire_DataAsset();

};

