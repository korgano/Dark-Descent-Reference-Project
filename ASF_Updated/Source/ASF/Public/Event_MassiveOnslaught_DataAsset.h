#pragma once
#include "CoreMinimal.h"
#include "EnumMissionDifficulty.h"
#include "Event_GenericOnslaught_DataAsset.h"
#include "MassiveOnslaughtAlienSpawnParams.h"
#include "MassiveOnslaughtPoolHiveSizeParams.h"
#include "MassiveOnslaughtPoolParams.h"
#include "TaggedAcknowVariants.h"
#include "Event_MassiveOnslaught_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_MassiveOnslaught_DataAsset : public UEvent_GenericOnslaught_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMassiveOnslaughtPoolHiveSizeParams> HiveSizePoolParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumMissionDifficulty, FMassiveOnslaughtPoolParams> DifficultyPoolParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMassiveOnslaughtAlienSpawnParams> SpawnableAliensParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveSpawnMinDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveSpawnMaxDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MOTimerExpiredEventBroadcastText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaggedAcknowVariants StartAcknows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaggedAcknowVariants EndAcknows;
    
    UEvent_MassiveOnslaught_DataAsset();

};

