#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActorWithGameplayTag.h"
#include "Item.generated.h"

class AASFCharacter;
class UTexture2D;

UCLASS(Blueprintable)
class ASF_API AItem : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockersTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* Character;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketWeaponEquiped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketWeaponReserved;
    
    AItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCharacter(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSocketWeaponEquiped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetItemTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetItemCategory();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetBlockersTag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachItemToCharacter(AASFCharacter* _Character);
    
};

