#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "Break_Quaternion.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UBreak_Quaternion : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Q;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 ConstQuat;
    
    UBreak_Quaternion();

};

