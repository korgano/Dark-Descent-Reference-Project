#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MaxAbsoluteDifference.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaxAbsoluteDifference : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 DefaultA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 DefaultB;
    
    UMaxAbsoluteDifference();

};

