#pragma once
#include "CoreMinimal.h"
#include "EMovementTypeEnum.h"
#include "Segment.h"
#include "Templates/SubclassOf.h"
#include "DataMove.generated.h"

class UNavigationQueryFilter;

USTRUCT(BlueprintType)
struct FDataMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSegment Locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Run;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ErrorTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartFromStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementTypeEnum MovementType;
    
    ASF_API FDataMove();
};

