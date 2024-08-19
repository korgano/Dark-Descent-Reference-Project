#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumDataModifierType.h"
#include "POIDataModifier.h"
#include "POI_DM_Float_Attribute.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOI_DM_Float_Attribute : public UPOIDataModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumDataModifierType ModifierType;
    
public:
    UPOI_DM_Float_Attribute();

};

