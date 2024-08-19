#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "DegreeToRadian.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UDegreeToRadian : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Degree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstDegree;
    
    UDegreeToRadian();

};

