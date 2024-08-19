#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Activity.h"
#include "Templates/SubclassOf.h"
#include "Activity_SwapItem.generated.h"

class AActor;
class UActivity_SwapItem;

UCLASS(Blueprintable)
class ASF_API UActivity_SwapItem : public UActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemCategoryTag;
    
public:
    UActivity_SwapItem();

    UFUNCTION(BlueprintCallable)
    void SetItemToEquip(FGameplayTag _ItemToEquip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSwapDuration();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetItemTag() const;
    
    UFUNCTION(BlueprintCallable)
    static UActivity_SwapItem* Create_Activity_SwapItem(AActor* _Context, TSubclassOf<UActivity_SwapItem> _ActivityClass, FGameplayTag _ItemTag, FVector _CharacterAimingLocation_Desired);
    
};

