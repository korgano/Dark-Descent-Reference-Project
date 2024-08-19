#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Event_InventoryComponent_FGameplayTag_int_intDelegate.h"
#include "InventoryItem.h"
#include "InventoryComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TeamIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FInventoryItem> Items;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InventoryComponent_FGameplayTag_int_int OnSuppliesQuantityChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> ReservedSupplies;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InventoryComponent_FGameplayTag_int_int OnSuppliesReservedQuantityChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> ReservedCapacity;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InventoryComponent_FGameplayTag_int_int OnSuppliesReservedCapacityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_InventoryComponent_FGameplayTag_int_int OnSuppliesCapacityChanged;
    
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Spend(FGameplayTag _Tag, int32 _Quantity, bool _HasBeenReserved);
    
    UFUNCTION(BlueprintCallable)
    void ReserveQuantity(FGameplayTag _Tag, int32 _Quantity);
    
    UFUNCTION(BlueprintCallable)
    void ReserveCapacity(FGameplayTag _Tag, int32 _Quantity);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveCapacity(FGameplayTag _Tag, int32 _Quantity);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseQuantity(FGameplayTag _Tag, int32 _Quantity);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCapacity(FGameplayTag _Tag, int32 _Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetWhiteItemIcon(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReservedQuantity(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReservedCapacity(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuantity(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetItemIcon(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCapacity(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllSupplies(TMap<FGameplayTag, int32>& _Res) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllResources(TMap<FGameplayTag, int32>& _Res) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllItems(TMap<FGameplayTag, int32>& _Res) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCheatInfiniteResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpend(FGameplayTag _Tag, int32 _Quantity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddQuantity(const FGameplayTag& _Tag, int32 _Quantity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddQuantities(UPARAM(Ref) TMap<FGameplayTag, int32>& _Items) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddQuantity(FGameplayTag _Tag, int32 _Quantity, bool _Reserved);
    
    UFUNCTION(BlueprintCallable)
    void AddQuantities(const TMap<FGameplayTag, int32>& _Supplies);
    
    UFUNCTION(BlueprintCallable)
    void AddCapacity(FGameplayTag _Tag, int32 _Quantity);
    
};

