#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageResultStruct.h"
#include "WeaponTargetStruct.h"
#include "WeaponActorComponent.generated.h"

class ARangeWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UWeaponActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWeaponActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnFire(ARangeWeapon* _Weapon, FWeaponTargetStruct _Target, bool _bIsSuccess, FDamageResultStruct _DamageResult);
    
};

