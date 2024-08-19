#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ActorWithGameplayTag.h"
#include "CharacterIDName.h"
#include "EnumAIActionStatus.h"
#include "EnumAiState.h"
#include "Event_AStasisPoint_GameplayTagDelegate.h"
#include "Templates/SubclassOf.h"
#include "StasisPoint.generated.h"

class AAIController_Alien;
class AASFGameModeBase_TacticalMode;
class AAlien;
class ATMEventSystem;
class UAIAction;
class UAIActionComponent;
class UAlienSystemic;
class UArrowComponent;
class UBoxComponent;
class UCommonSaveLoadComponent;
class UFactionSystemic;
class UNavArea;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASF_API AStasisPoint : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AStasisPoint_GameplayTag OnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> DefaultNavArea;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAlien> AlienOnStaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool AlienLeftStasisPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* StasisRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PathFindingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StasisTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName AlienIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAlien>> AllowedAlienClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAlien* AlienOnStase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* SaveLoadComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    AStasisPoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UnregisterFromAlienSystemic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnAlienOnBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void SetStasisPointState(FGameplayTag _NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveAlienFromStasisPoint();
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterToAlienSystemic();
    
    UFUNCTION(BlueprintCallable)
    void OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawn(AAlien* Alien);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEventSystemSetOnGameMode(AASFGameModeBase_TacticalMode* _GameMode, ATMEventSystem* _EventSystem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAlienNewState(AAIController_Alien* AIController, EnumAiState OldState, EnumAiState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAlienActionStop(UAIActionComponent* _AIActionComponent, UAIAction* _Action, EnumAIActionStatus _AIActionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStasisPointDisable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStasisPointAvailableForClass(const TSoftClassPtr<AAlien>& Alien) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStasisPointAvailable(AAlien* Alien);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRegistrationToAlienSystemic(UAlienSystemic* AlienSystemic);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetXenoTechProjectBlueprint() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetStasisTypeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStasisPointEntrance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableNavigationOnStasisPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DettachAlienToTheMesh(AAlien* Alien);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachAlienToTheMesh(AAlien* Alien);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddAlienToStasisPoint(AAlien* Alien);
    
};

