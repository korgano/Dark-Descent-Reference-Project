#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Activity_Combat_RangeWeapon.h"
#include "Templates/SubclassOf.h"
#include "Activity_RangeWeapon_FakeShot.generated.h"

class AActor;
class UActivity_RangeWeapon_FakeShot;

UCLASS(Blueprintable)
class ASF_API UActivity_RangeWeapon_FakeShot : public UActivity_Combat_RangeWeapon {
    GENERATED_BODY()
public:
    UActivity_RangeWeapon_FakeShot();

    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(FVector _TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    static UActivity_RangeWeapon_FakeShot* Create_Activity_FakeShot(TSubclassOf<UActivity_RangeWeapon_FakeShot> _Activity_Type, AActor* _Instigator, FVector _TargetLocation);
    
};

