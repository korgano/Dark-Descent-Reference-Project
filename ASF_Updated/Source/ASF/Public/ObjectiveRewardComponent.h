#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EffectRewardStruct.h"
#include "Event_Reward_TindaLevelSequence_LevelSequencePlayerDelegate.h"
#include "ObjectiveRewardComponent.generated.h"

class AGameplayTwinActor;
class ATindaLevelSequenceActor;
class UAudioLog_DataAsset;
class UDataPad_DataAsset;
class ULevelSequencePlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UObjectiveRewardComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinalRewardOfObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFailReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayTwinActor* SequencerTwinActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGameplayTwinActor*> SequencerTwinActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockAcknowsDuringSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> RessourcesReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SpecialRessourcesReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataPad_DataAsset*> DataPadsReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAudioLog_DataAsset*> AudioLogsReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XPPointsReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectRewardStruct> EffectsReward;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Reward_TindaLevelSequence_LevelSequencePlayer OnRewardSequenceFinished;
    
    UObjectiveRewardComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefractorTwin();
    
    UFUNCTION(BlueprintCallable)
    void OnSequencerFinished(ATindaLevelSequenceActor* TindaSequencer, ULevelSequencePlayer* SequencerPlayer);
    
    UFUNCTION(BlueprintCallable)
    void GiveReward();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GiveDataPads(const TArray<UDataPad_DataAsset*>& _DataPads);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GiveAudioLog(const TArray<UAudioLog_DataAsset*>& _AudioLogs);
    
};

