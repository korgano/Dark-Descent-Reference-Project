#pragma once
#include "CoreMinimal.h"
#include "Event_Reward_TindaLevelSequence_LevelSequencePlayerDelegate.generated.h"

class ATindaLevelSequenceActor;
class ULevelSequencePlayer;
class UObjectiveRewardComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_Reward_TindaLevelSequence_LevelSequencePlayer, UObjectiveRewardComponent*, RewardComponent, ATindaLevelSequenceActor*, TindaSequencer, ULevelSequencePlayer*, SequencerPlayer);

