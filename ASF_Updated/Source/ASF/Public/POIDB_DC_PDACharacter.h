#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "POIDataBinder_DataContainer.h"
#include "POIDB_DC_PDACharacter.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIDB_DC_PDACharacter : public UPOIDataBinder_DataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DataContainerTag;
    
public:
    UPOIDB_DC_PDACharacter();

};

