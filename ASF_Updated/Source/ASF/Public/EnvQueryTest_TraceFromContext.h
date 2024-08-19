#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_TraceFromContext.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class ASF_API UEnvQueryTest_TraceFromContext : public UEnvQueryTest {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FEnvTraceData TraceData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue TraceFromContext;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ItemHeightOffset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ContextHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> ContextBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_TraceFromContext();

};

