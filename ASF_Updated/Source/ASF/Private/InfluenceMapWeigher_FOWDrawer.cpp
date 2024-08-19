#include "InfluenceMapWeigher_FOWDrawer.h"

UInfluenceMapWeigher_FOWDrawer::UInfluenceMapWeigher_FOWDrawer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoAdd = true;
    this->VisionPolygonRadius = 2000.00f;
}

void UInfluenceMapWeigher_FOWDrawer::OnInfluenceMapUpdated_Implementation(AInfluenceMapManager* _InfluenceMapManager) {
}


