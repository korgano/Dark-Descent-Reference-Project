#include "MapFeedbackData_MovingObject.h"

UMapFeedbackData_MovingObject::UMapFeedbackData_MovingObject() {
    this->MapFeedbackDataComponent = NULL;
    this->bIsMotionTrackerFeedback = false;
    this->bIsFeedbackedOnlyOnMovement = false;
    this->bIsVisibleOnMotionTracker = false;
}

void UMapFeedbackData_MovingObject::MotionTrackerVisibilityChanged(UMapFeedbackDataComponent* _MapFeedbackDataComponent, bool _IsVisibleOnMotionTracker) {
}


