#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "AIDataProvider_FindHiddingSpot.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UAIDataProvider_FindHiddingSpot : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolValue;
    
    UAIDataProvider_FindHiddingSpot();

};

