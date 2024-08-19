#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActorWithGameplayTag.h"
#include "Event_ARoomDelegate.h"
#include "Event_FGameplayTagDelegate.h"
#include "Templates/SubclassOf.h"
#include "Room.generated.h"

class AASFGameModeBase_BaseManagement;
class AActor;
class AHumanoid;
class AMarineSlot;
class AMarineSpawnArea;
class ASequenceMapper;
class UBM_Room_DataAsset;
class UCommonSaveLoadComponent;
class UStewardAcknows_DataAsset;
class UUserWidget;

UCLASS(Blueprintable)
class ASF_API ARoom : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* CommonSaveLoadComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ARoom OnRoomBecameAvailable;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ARoom OnRoomNewContentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ARoom OnRoomFeatureUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ARoom OnNewAvailableUpgradesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_FGameplayTag OnRoomUpgradePurchased;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBM_Room_DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStewardAcknows_DataAsset* AcknowsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MainInteractionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasNewContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PurchasedUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> NewAvailableUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceMapper* SequenceMapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMarineSpawnArea*> MarineSpawnAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMarineSlot*> MarineSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InteractiveActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EmployeeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoomFeatureTag;
    
public:
    ARoom(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateRoomActorsInteractivity(bool bDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetHasNewContent(bool _HasNewContent);
    
    UFUNCTION(BlueprintCallable)
    void SetAvailable();
    
    UFUNCTION(BlueprintCallable)
    void Repair();
    
    UFUNCTION(BlueprintCallable)
    void RemoveNewAvailableUpgrade(FGameplayTag _UpgradeTag);
    
    UFUNCTION(BlueprintCallable)
    void PurchaseUpgrade(FGameplayTag _UpgradeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void OverrideMarineListSorting(UPARAM(Ref) TArray<AHumanoid*>& _Marines, TArray<AHumanoid*>& _SortedMarines) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNewTurn_Event(AASFGameModeBase_BaseManagement* _GameMode, int32 _Turn);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFeatureUnlocked(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpecificEmployeeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableUpgrade(bool _CheckAffordable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableEmployees(int32 _Count) const;
    
    UFUNCTION(BlueprintCallable)
    void GrantUpgrade(FGameplayTag _UpgradeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeLevelForActor(AActor* _UpgradeActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEmployeeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableEmployees() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorForRoomUpgrade(FGameplayTag _UpgradeTag) const;
    
    UFUNCTION(BlueprintCallable)
    void EnterRoom();
    
    UFUNCTION(BlueprintCallable)
    void AddNewAvailableUpgrade(FGameplayTag _UpgradeTag);
    
};

