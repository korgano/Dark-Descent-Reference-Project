#include "POI_NavBlockerComponent.h"

UPOI_NavBlockerComponent::UPOI_NavBlockerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavBlockerState = EnumNavBlockerState::NONE;
    this->LinkedInfluenceMapWeigherComponent = NULL;
}

void UPOI_NavBlockerComponent::SetLinkedInfluenceMapWeigherComponent(UInfluenceMapWeigherComponent* _LinkedInfluenceMapWeigherComponent) {
}


