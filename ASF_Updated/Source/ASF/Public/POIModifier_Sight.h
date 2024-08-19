#pragma once
#include "CoreMinimal.h"
#include "EnumConditionModifier.h"
#include "POIModifier.h"
#include "POIModifier_Sight.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIModifier_Sight : public UPOIModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumConditionModifier ConditionModifier;
    
public:
    UPOIModifier_Sight();

};

