#pragma once
#include "CoreMinimal.h"
#include "DamageResultStruct.h"
#include "InfluenceMapWeigherComponent.h"
#include "InfluenceMapWeigher_MarinePlayer.generated.h"

class AASFCharacter;
class AASFGameModeBase_TacticalMode;
class AHumanoidMarine;
class AInfluenceMapManager;
class ARoomCluster;
class ASquad;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInfluenceMapWeigher_MarinePlayer : public UInfluenceMapWeigherComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionPolygonRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidMarine* Humanoid;
    
public:
    UInfluenceMapWeigher_MarinePlayer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnVisibleElementRebuilt(ARoomCluster* _RoomCluster);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadLeaderChanged(ASquad* Squad, AHumanoidMarine* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadInit(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnInfluenceMapManagerSet(AASFGameModeBase_TacticalMode* _GameMode, AInfluenceMapManager* _InfluenceMapManager);
    
    UFUNCTION(BlueprintCallable)
    void OnInfluenceMapManagerDeleted(AInfluenceMapManager* _InfluenceMapManager);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult);
    
};

