#pragma once
#include "CoreMinimal.h"
#include "POIDataCollector.h"
#include "StructPOIResultData.h"
#include "POICondition.generated.h"

class UAIPointOfInterestVolatile;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition : public UPOIDataCollector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InverseCondition;
    
public:
    UPOICondition();

protected:
    UFUNCTION(BlueprintCallable)
    bool ComputeCondition_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ComputeCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData);
    
};

