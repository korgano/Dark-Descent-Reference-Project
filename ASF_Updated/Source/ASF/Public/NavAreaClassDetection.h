#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageResultStruct.h"
#include "Event_Actor_NavArea_NavAreaDelegate.h"
#include "Event_UNavAreaClassDetection_NavArea_NavAreaDelegate.h"
#include "NavNodeRefCarrier.h"
#include "NavAreaClassDetection.generated.h"

class AASFCharacter;
class AASFGameModeBase_TacticalMode;
class ARoomCluster;
class ASquad;
class ASubLevelHandler;
class USquadMember;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UNavAreaClassDetection : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CurrentNavAreaClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Actor_NavArea_NavArea OnNavAreaClassChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UNavAreaClassDetection_NavArea_NavArea OnEnteringNewGraphElement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRoomClusterReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubLevelReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnable;
    
public:
    UNavAreaClassDetection(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelBeginUnload(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterSet(ARoomCluster* RoomCluster);
    
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterFirstGeneration(ARoomCluster* RoomCluster);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerRemovedFromSquad(USquadMember* SquadMember, ASquad* Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerAddedToSquad(USquadMember* SquadMember, ASquad* Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNavNodeRefCarrier GetNavNodeRefCarrier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGraphID();
    
};

