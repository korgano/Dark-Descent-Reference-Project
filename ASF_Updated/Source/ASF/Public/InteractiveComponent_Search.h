#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractiveComponent_Usable.h"
#include "LootableItem.h"
#include "InteractiveComponent_Search.generated.h"

class USkeletalMeshComponent;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Search : public UInteractiveComponent_Usable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> DeterminedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FLootableItem> RandomItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FText> SpecialItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool HasSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbRandomItemToRecover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToFindNothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EndWithClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayLootAfterInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInfinite;
    
    UInteractiveComponent_Search(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateGUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnerIsInteractible();
    
    UFUNCTION(BlueprintCallable)
    void OnListenTagInactive(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetCorpseMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddLootTag(bool _HasSearch);
    
};

