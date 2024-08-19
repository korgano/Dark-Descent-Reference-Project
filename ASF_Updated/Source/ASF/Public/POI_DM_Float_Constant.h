#pragma once
#include "CoreMinimal.h"
#include "EnumDataModifierType.h"
#include "POIDataModifier.h"
#include "POI_DM_Float_Constant.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOI_DM_Float_Constant : public UPOIDataModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstantValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumDataModifierType ModifierType;
    
public:
    UPOI_DM_Float_Constant();

};

