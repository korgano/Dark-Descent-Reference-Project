#include "ActionStep_Activity.h"
#include "GameplayTask.h"

UActionStep_Activity::UActionStep_Activity() {
    this->Activity = NULL;
}

void UActionStep_Activity::SetGameplayTask(UActivity* _Activity) {
}

void UActionStep_Activity::OnActivityPaused_Implementation(UActivity* _Activity, EnumActionStatus _Status) {
}

void UActionStep_Activity::OnActivityEnded_Implementation(UActivity* _Activity, EnumActionStatus _Status) {
}

UActivity* UActionStep_Activity::GetGameplayTask() {
    return NULL;
}

UActivity* UActionStep_Activity::CreateActivity_Implementation() {
    return NULL;
}


