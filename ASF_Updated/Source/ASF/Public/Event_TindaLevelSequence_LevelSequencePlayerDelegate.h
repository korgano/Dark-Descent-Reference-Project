#pragma once
#include "CoreMinimal.h"
#include "Event_TindaLevelSequence_LevelSequencePlayerDelegate.generated.h"

class ATindaLevelSequenceActor;
class ULevelSequencePlayer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_TindaLevelSequence_LevelSequencePlayer, ATindaLevelSequenceActor*, TindaSequencer, ULevelSequencePlayer*, SequencerPlayer);

