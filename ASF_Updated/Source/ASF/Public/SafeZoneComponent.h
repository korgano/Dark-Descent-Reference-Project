#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Event_PathElement_ModifiedDelegate.h"
#include "Event_SafeZone_ActivationDelegate.h"
#include "Templates/SubclassOf.h"
#include "SafeZoneComponent.generated.h"

class AASFGameModeBase_TacticalMode;
class AActorWithGameplayTag;
class ARoomShelter;
class ASquad;
class ASubLevelHandler;
class ATMEventSystem;
class UAIPointOfInterestConfig;
class UAIPointOfInterestContainer;
class UPOIDefaultContainer;
class URoomClusterFilter;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USafeZoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSafeZoneActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSafeShelter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SafeZone_Activation OnSafeZoneEnable;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SafeZone_Activation OnSafeZoneDisable;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_PathElement_Modified OnPathElementModified;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoomClusterFilter> ClusterFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPOIDefaultContainer* SafeZoneEnemyContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPOIDefaultContainer* SafeZoneSquadMarineOutContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMassiveOnSlaughtOnGoing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreRoomShelterable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARoomShelter*> RoomShelters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> InShelterSquadEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* InShelterSquadEffect;
    
public:
    USafeZoneComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* UpdateSquadPlayer();
    
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* UpdateSpawnPoint();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateSafeZone_Full();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSafeZone();
    
protected:
    UFUNCTION(BlueprintCallable)
    UPOIDefaultContainer* UpdateEnemies();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ResolveShelterStatus(ATMEventSystem* EventSystem);
    
    UFUNCTION(BlueprintCallable)
    void RequestNextTickUpdate();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRoomShelters(ARoomShelter* _RoomShelter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelIsLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnPointUpdated(ATMEventSystem* _EventSystem);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSquadUpdated(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionAddedOrRemoved(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionLoaded(AASFGameModeBase_TacticalMode* GameMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMassiveOnSlaughtUpdated(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void NextTickUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationShelterable(const FVector& _Location);
    
    UFUNCTION(BlueprintPure)
    bool IsGIDShelterable(int64 GID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeSafeComponent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARoomShelter* GetRoomShelterForLocation(const FVector& _Location);
    
    UFUNCTION(BlueprintPure)
    ARoomShelter* GetRoomShelterForGID(int64 GID);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<AActorWithGameplayTag*> GetRemainingDoorToWeldForGID(int32 roomGID);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActorWithGameplayTag*> GetRemainingDoorToWeldAtLocation(FVector _Location);
    
    UFUNCTION(BlueprintCallable)
    bool GetRemainingDoorForShleterAtLocation(FVector _Location, const FGameplayTagContainer& _InInvalidTags, const FGameplayTagQuery& _InLockedTags, int32& _OutDoorClosedNbr, int32& _OutTotalDoorNbr, int32& _OutDoorIgnored, TArray<AActorWithGameplayTag*>& _OutDoorToWeld);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableSafeZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableSafeZone();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindToPlayerSquadUpdate(bool _Bind);
    
    UFUNCTION(BlueprintCallable)
    void BindToMassiveOnSlaughtUpdate(bool _Bind);
    
    UFUNCTION(BlueprintCallable)
    void BindToGamePerceptionUpdate(bool _Bind);
    
    UFUNCTION(BlueprintCallable)
    bool AreRoomsShelterable();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddRoomShelters(ARoomShelter* _RoomShelter);
    
};

