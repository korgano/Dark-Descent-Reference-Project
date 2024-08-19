#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Activity.h"
#include "Activity_SwapWeapon.generated.h"

UCLASS(Blueprintable)
class ASF_API UActivity_SwapWeapon : public UActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponTag;
    
public:
    UActivity_SwapWeapon();

    UFUNCTION(BlueprintCallable)
    void SetWeaponTag(FGameplayTag _WeaponTag);
    
};

