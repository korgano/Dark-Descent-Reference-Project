#include "AIPointOfInterestVolatile_Cover.h"

UAIPointOfInterestVolatile_Cover::UAIPointOfInterestVolatile_Cover() {
    this->RoomGraphCover = NULL;
}

void UAIPointOfInterestVolatile_Cover::RegenerateContainer(AASFGameState_TacticalMode* _GameState) {
}

bool UAIPointOfInterestVolatile_Cover::IsCoveredFromThreat(FVector _QuerierPosition, FVector _PositionToCoverm, float _ProtectionAngle) const {
    return false;
}

TArray<FVector> UAIPointOfInterestVolatile_Cover::FindCoverSpots(FVector _QuerierPosition, FVector _PositionToCover, bool _FromDirection, TArray<FVector>& _Segment, float _ProtectionAngle, float _MaxDistance) {
    return TArray<FVector>();
}


