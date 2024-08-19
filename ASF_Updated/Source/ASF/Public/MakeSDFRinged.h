#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "MakeSDFRinged.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMakeSDFRinged : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput SDF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstSDF;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstThickness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Softness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstSoftness;
    
    UMakeSDFRinged();

};

