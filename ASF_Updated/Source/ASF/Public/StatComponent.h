#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Event_StatComponent_TindaAttributeDelegate.h"
#include "Event_floatDelegate.h"
#include "Tinda_Float.h"
#include "StatComponent.generated.h"

class AActor;
class UCharacterMovementComponent;
class UTinda_Attribute;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UStatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_StatComponent_TindaAttribute OnAttributesChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTinda_Attribute*> DynamicAttributes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* OwnerMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* MovementSpeedAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* RotationSpeedAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* AimingRotationSpeedAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* BraveryAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* CharacterDodgeAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* CharacterDodgeBySizeAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTinda_Float Life;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_float OnLifeValueChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* MaxLifeAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTinda_Float Armor;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_float OnArmorValueChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Attribute* MaxArmorAttribute;
    
    UStatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateLifeMax(UTinda_Attribute* Attribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateArmorMax(UTinda_Attribute* Attribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotationSpeedUpdated(UTinda_Attribute* _RotationSpeedAttribute, float _OldValue, float _NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovementSpeedUpdated(UTinda_Attribute* _MovementSpeedAttribute, float _OldValue, float _NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_Attribute* GetAttributeWithQuery(const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttributeValuesFromActorWithQuery(AActor* _Actor, const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect, TArray<float>& _Res);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttributeValuesFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, TArray<float>& _Res);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttributeValueFromActorWithQuery(AActor* _Actor, const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect, float _DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttributeValueFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, float _DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttributesWithTagFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, const FGameplayTag& _Tag, TArray<UTinda_Attribute*>& _Res);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttributesWithQueryFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect, TArray<UTinda_Attribute*>& _Res);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttributesWithQuery(const FGameplayTag& _AttributeName, const FGameplayTagQuery& _QueryToRespect, TArray<UTinda_Attribute*>& _Res);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttributesFromActor(AActor* _Actor, const FGameplayTag& _AttributeName, TArray<UTinda_Attribute*>& _Res);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttributes(const FGameplayTag& _AttributeName, TArray<UTinda_Attribute*>& _Res);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_Attribute* GetAttributeMatchingTag(const FGameplayTag& _AttributeName, const FGameplayTag& _Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_Attribute* GetAttribute(const FGameplayTag& _AttributeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTinda_Attribute*> GetAllAttributes();
    
    UFUNCTION(BlueprintCallable)
    static UTinda_Attribute* CreateAttributeWithMinMax_BP(AActor* _AttributeOwner, FGameplayTag _AttributeTag, float _BaseValue, float _MinValue, float _MaxValue, const TArray<FGameplayTag>& _AdditionalTagPath);
    
    UFUNCTION(BlueprintCallable)
    static UTinda_Attribute* CreateAttributeWithMinMax(AActor* _AttributeOwner, FGameplayTag _TagName, float _BaseValue, float _MinValue, float _MaxValue, const TArray<FGameplayTag>& _AdditionalTagPath);
    
    UFUNCTION(BlueprintCallable)
    static UTinda_Attribute* CreateAttribute_BP(AActor* _AttributeOwner, FGameplayTag _AttributeTag, float _BaseValue, const TArray<FGameplayTag>& _AdditionalTagPath);
    
    UFUNCTION(BlueprintCallable)
    static UTinda_Attribute* CreateAttribute(AActor* _AttributeOwner, FGameplayTag _TagName, float _BaseValue, const TArray<FGameplayTag>& _AdditionalTagPath);
    
};

