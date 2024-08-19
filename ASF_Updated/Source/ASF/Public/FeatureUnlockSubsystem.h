#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FeatureUnlockEvent_FGameplayTagDelegate.h"
#include "FeatureUnlockSubsystem.generated.h"

UCLASS(Blueprintable)
class ASF_API UFeatureUnlockSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnMissionUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnMissionObjectiveUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnAnyFeatureUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedMissionObjectives;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnEventUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedEvents;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnSkillUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedSkills;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnInteractionUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedInteractions;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnResourceUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedResources;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnSupplyUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedSupplies;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnCivilianUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedCivilians;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnFoeUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedFoes;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnRoomUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedRooms;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnInterludeUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedInterludes;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnTutorialUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedTutorials;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnCodexEntryUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedCodexEntries;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFeatureUnlockEvent_FGameplayTag OnFeatureUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LockedFeatures;
    
public:
    UFeatureUnlockSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockAll();
    
    UFUNCTION(BlueprintCallable)
    void Unlock(const FGameplayTagContainer& _UnlockTags);
    
    UFUNCTION(BlueprintCallable)
    void Lock(FGameplayTag _LockedTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSupplyUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSupplyLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoomUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoomLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionObjectiveUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionObjectiveLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionFinished(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterludeUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterludeLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFoeUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFoeLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeatureUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeatureLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCodexEntryUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCodexEntryLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCivilianUnlocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCivilianLocked(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyCodexEntryUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetLockedFeatures() const;
    
};

