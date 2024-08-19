#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EnumTargetType.h"
#include "TargetableObjectData.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASF_API UTargetableObjectData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionWeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastComputeTargetDirection;
    
public:
    UTargetableObjectData();

    UFUNCTION(BlueprintCallable)
    FVector GetLastComputedDirection();
    
    UFUNCTION(BlueprintCallable)
    FVector GetGlobalTargetPoint();
    
    UFUNCTION(BlueprintCallable)
    FVector ComputeTargetPoint(AActor* Origine, FVector _SquadCenter);
    
};

