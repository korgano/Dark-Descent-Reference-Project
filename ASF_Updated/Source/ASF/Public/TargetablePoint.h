#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TargetableObjectData.h"
#include "TargetablePoint.generated.h"

UCLASS(Blueprintable)
class ASF_API UTargetablePoint : public UTargetableObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetedPoint;
    
    UTargetablePoint();

};

