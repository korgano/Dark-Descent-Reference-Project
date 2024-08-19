#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_DataAsset.h"
#include "Event_Howler_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_Howler_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAliensSpawnOnHowl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAliensSpawnOnHowl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> EnemySpawnProbability;
    
    UEvent_Howler_DataAsset();

};

