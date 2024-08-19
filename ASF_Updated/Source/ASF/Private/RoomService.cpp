#include "RoomService.h"
#include "Templates/SubclassOf.h"

URoomService::URoomService() {
}

void URoomService::SetRooms(const TArray<AActor*>& _Rooms) {
}

void URoomService::OnNewTurn_Event(AASFGameModeBase_BaseManagement* _GameMode, int32 _Turn) {
}

TArray<ARoom*> URoomService::GetRooms() const {
    return TArray<ARoom*>();
}

ARoom* URoomService::GetRoomByClass(const UObject* WoldContextObject, TSubclassOf<ARoom> RoomClass, FGameplayTag _RoomTag) {
    return NULL;
}


