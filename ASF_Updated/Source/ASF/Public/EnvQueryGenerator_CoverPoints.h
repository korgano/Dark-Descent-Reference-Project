#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_CoverPoints.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UEnvQueryGenerator_CoverPoints : public UEnvQueryGenerator_ProjectedPoints {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Threats;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug;
    
public:
    UEnvQueryGenerator_CoverPoints();

};

