#include "Activity_CommandOverwatch.h"
#include "EnumActivityType.h"
#include "Templates/SubclassOf.h"

UActivity_CommandOverwatch::UActivity_CommandOverwatch() {
    this->ActivityType = EnumActivityType::COMMAND_OVERWATCH;
}

UActivity_CommandOverwatch* UActivity_CommandOverwatch::Create_Activity_CommandOverwatch(TSubclassOf<UActivity> _Activity_Type, AActor* _Instigator) {
    return NULL;
}


