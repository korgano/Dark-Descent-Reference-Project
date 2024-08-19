#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_GridToLocation.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UEnvQueryGenerator_GridToLocation : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue GridHalfWidth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SpaceBetween_Length;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SpaceBetween_Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UEnvQueryGenerator_GridToLocation();

};

