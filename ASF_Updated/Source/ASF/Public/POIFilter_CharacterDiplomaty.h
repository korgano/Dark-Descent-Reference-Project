#pragma once
#include "CoreMinimal.h"
#include "EDiplomacy.h"
#include "POIFilter.h"
#include "POIFilter_CharacterDiplomaty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_CharacterDiplomaty : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Include;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiplomacy Diplomaty;
    
public:
    UPOIFilter_CharacterDiplomaty();

};

