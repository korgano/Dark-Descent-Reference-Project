#include "AIHuntDelimiter.h"

AAIHuntDelimiter::AAIHuntDelimiter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRoomClusterReady = false;
}

void AAIHuntDelimiter::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AAIHuntDelimiter::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

TArray<int64> AAIHuntDelimiter::GetHuntRoomGraphID() const {
    return TArray<int64>();
}

AAIHuntDelimiter* AAIHuntDelimiter::GetAIHuntDelimiter(FCharacterIDName _CharacterIDName) {
    return NULL;
}


