#include "AIMarkComponent.h"

UAIMarkComponent::UAIMarkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAIMarkComponent::RemoveMark(const FGameplayTag& _MarkTag, const UObject* Object) {
}

bool UAIMarkComponent::GetMarkWeight(float& Strengh, float& Decision, const TArray<FGameplayTag>& _MarkTags, const UObject* _Object) {
    return false;
}

int32 UAIMarkComponent::FindObject(const FGameplayTag& _MarkTag, const UObject* _Object) const {
    return 0;
}

bool UAIMarkComponent::ContainMark(TArray<FGameplayTag>& _MarkTags, UObject* Object) {
    return false;
}

bool UAIMarkComponent::ContainForceFailMark(TArray<FGameplayTag>& _MarkTags, UObject* Object) {
    return false;
}

void UAIMarkComponent::AddMark(const FGameplayTag& _MarkTag, const UObject* _Object, bool _ForceFail, float _Duration, float _DecisionModificator, float _StrenghtModificator) {
}


