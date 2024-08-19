#include "BTDecoratorBlackboardValueChange.h"

UBTDecoratorBlackboardValueChange::UBTDecoratorBlackboardValueChange() {
    this->NodeName = TEXT("BlackboardValueChange");
    this->NotifyObserver = ASF_EBTBlackboardRestart::ResultChange;
}


