#include "StatComponent.h"

UStatComponent::UStatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerMovementComponent = NULL;
    this->MovementSpeedAttribute = NULL;
    this->RotationSpeedAttribute = NULL;
    this->AimingRotationSpeedAttribute = NULL;
    this->BraveryAttribute = NULL;
    this->CharacterDodgeAttribute = NULL;
    this->CharacterDodgeBySizeAttribute = NULL;
    this->MaxLifeAttribute = NULL;
    this->MaxArmorAttribute = NULL;
}

void UStatComponent::UpdateLifeMax(UTinda_Attribute* Attribute, float OldValue, float NewValue) {
}

void UStatComponent::UpdateArmorMax(UTinda_Attribute* Attribute, float OldValue, float NewValue) {
}

void UStatComponent::OnRotationSpeedUpdated_Implementation(UTinda_Attribute* _RotationSpeedAttribute, float _OldValue, float _NewValue) {
}

void UStatComponent::OnMovementSpeedUpdated_Implementation(UTinda_Attribute* _MovementSpeedAttribute, float _OldValue, float _NewValue) {
}

UTinda_Attribute* UStatComponent::GetAttributeWithQuery(const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect) {
    return NULL;
}

void UStatComponent::GetAttributeValuesFromActorWithQuery(AActor* _Actor, const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect, TArray<float>& _Res) {
}

void UStatComponent::GetAttributeValuesFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, TArray<float>& _Res) {
}

float UStatComponent::GetAttributeValueFromActorWithQuery(AActor* _Actor, const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect, float _DefaultValue) {
    return 0.0f;
}

float UStatComponent::GetAttributeValueFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, float _DefaultValue) {
    return 0.0f;
}

void UStatComponent::GetAttributesWithTagFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, const FGameplayTag& _Tag, TArray<UTinda_Attribute*>& _Res) {
}

void UStatComponent::GetAttributesWithQueryFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect, TArray<UTinda_Attribute*>& _Res) {
}

void UStatComponent::GetAttributesWithQuery(const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect, TArray<UTinda_Attribute*>& _Res) {
}

void UStatComponent::GetAttributesFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, TArray<UTinda_Attribute*>& _Res) {
}

void UStatComponent::GetAttributes(const FGameplayTag& _AttributeName, TArray<UTinda_Attribute*>& _Res) {
}

UTinda_Attribute* UStatComponent::GetAttributeMatchingTag(const FGameplayTag& _AttributeName, const FGameplayTag& _Tag) {
    return NULL;
}

UTinda_Attribute* UStatComponent::GetAttribute(const FGameplayTag& _AttributeName) {
    return NULL;
}

TArray<UTinda_Attribute*> UStatComponent::GetAllAttributes() {
    return TArray<UTinda_Attribute*>();
}

UTinda_Attribute* UStatComponent::CreateAttributeWithMinMax_BP(AActor* _AttributeOwner, FGameplayTag _AttributeTag, float _BaseValue, float _MinValue, float _MaxValue, const TArray<FGameplayTag>& _AdditionalTagPath) {
    return NULL;
}

UTinda_Attribute* UStatComponent::CreateAttributeWithMinMax(AActor* _AttributeOwner, FGameplayTag _TagName, float _BaseValue, float _MinValue, float _MaxValue, const TArray<FGameplayTag>& _AdditionalTagPath) {
    return NULL;
}

UTinda_Attribute* UStatComponent::CreateAttribute_BP(AActor* _AttributeOwner, FGameplayTag _AttributeTag, float _BaseValue, const TArray<FGameplayTag>& _AdditionalTagPath) {
    return NULL;
}

UTinda_Attribute* UStatComponent::CreateAttribute(AActor* _AttributeOwner, FGameplayTag _TagName, float _BaseValue, const TArray<FGameplayTag>& _AdditionalTagPath) {
    return NULL;
}


