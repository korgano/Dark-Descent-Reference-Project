#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Event_TutorialInputBinder_BoolDelegate.h"
#include "Event_TutorialInputBinder_NamesDelegate.h"
#include "Templates/SubclassOf.h"
#include "TutorialInputBinder.generated.h"

class AASFGameModeBase_TacticalMode;
class ASkillRestrictedLaunchZone;
class UDynamiqueSaveLoadComponent;
class USkill;

UCLASS(Blueprintable)
class ASF_API ATutorialInputBinder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamiqueSaveLoadComponent* DynamicSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionToConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> AxisToConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionToConsumeForced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> AxisToConsumeForced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TutorialInputBinder_Names OnBlockActions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TutorialInputBinder_Names OnBlockAxis;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TutorialInputBinder_Bool OnCheckShouldConsumeInputSkillShotTutoReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TutorialInputBinder_Bool OnTutorialInputBinderActivationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TutoInteractActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASkillRestrictedLaunchZone*, TSubclassOf<USkill>> MapRestrictedZone;
    
    ATutorialInputBinder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldConsumeInputSkillShotTutoReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldConsumeInputSkillShotTuto();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldConsumeInputMoveTutoRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldConsumeInputMoveTuto();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldConsumeInputInteractionTutoPart2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldConsumeInputInteractionTuto();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldConsumeInputForceSkillShotReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldConsumeInputDetectionTutoPart3();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldConsumeInputDetectionTutoPart2();
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool _Active);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAxis(const TArray<FName>& _AxisToRelease, bool UseForceArray);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAll();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseActions(const TArray<FName>& _ActionToRelease, bool UseForceArray);
    
    UFUNCTION(BlueprintCallable)
    void RefreshBindings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMissionLoaded(AASFGameModeBase_TacticalMode* GameMode);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnAxisEvent(float _Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchSkillShotTutoReleased();
    
    UFUNCTION(BlueprintCallable)
    void LaunchSkillShotTuto();
    
    UFUNCTION(BlueprintCallable)
    void LaunchMoveTuto();
    
    UFUNCTION(BlueprintCallable)
    void LaunchMoveRunningTuto();
    
    UFUNCTION(BlueprintCallable)
    void LaunchInteractionTuto(AActor* _TutoInteractActor);
    
    UFUNCTION(BlueprintCallable)
    void LaunchDetectionP3Tuto();
    
    UFUNCTION(BlueprintCallable)
    void LaunchDetectionP2Tuto();
    
    UFUNCTION(BlueprintCallable)
    void LaunchDetectionP1Tuto();
    
    UFUNCTION(BlueprintCallable)
    void ForceSkillShotToZone(TSubclassOf<USkill> SkillClass, ASkillRestrictedLaunchZone* LaunchZone);
    
    UFUNCTION(BlueprintCallable)
    void BlockAxis(const TArray<FName>& _AxisToBlock, bool UseForceArray);
    
    UFUNCTION(BlueprintCallable)
    void BlockActions(const TArray<FName>& _ActionToBlock, bool UseForceArray);
    
};

