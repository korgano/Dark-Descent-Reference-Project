#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POIDataContainer.h"
#include "POIDataContainer_Float_Attribute.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDataContainer_Float_Attribute : public UPOIDataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeTag;
    
public:
    UPOIDataContainer_Float_Attribute();

};

