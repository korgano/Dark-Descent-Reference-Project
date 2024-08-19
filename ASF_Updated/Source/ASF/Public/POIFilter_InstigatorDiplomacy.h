#pragma once
#include "CoreMinimal.h"
#include "EDiplomacy.h"
#include "POIFilter.h"
#include "POIFilter_InstigatorDiplomacy.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOIFilter_InstigatorDiplomacy : public UPOIFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Include;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiplomacy Diplomaty;
    
public:
    UPOIFilter_InstigatorDiplomacy();

};

