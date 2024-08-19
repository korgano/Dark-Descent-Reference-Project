#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Event_InventoryResourceComponent_FGameplayTag_Int32_Int32Delegate.h"
#include "InventoryResourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInventoryResourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Resources;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InventoryResourceComponent_FGameplayTag_Int32_Int32 OnResourcesChanged;
    
    UInventoryResourceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpendResources(FGameplayTag _ResourceTag, int32 _NbMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetResources(FGameplayTag _ResourceTag, int32 _NbMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceQuantity(FGameplayTag _GameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetAllResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpendResourceQuantity(FGameplayTag _ResourceTag, int32 _Quantity) const;
    
    UFUNCTION(BlueprintCallable)
    void AddResources(FGameplayTag _ResourceTag, int32 _NbMaterial);
    
};

