#pragma once
#include "CoreMinimal.h"
#include "POICondition.h"
#include "POICondition_Distance.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_Distance : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MaxDistance;
    
public:
    UPOICondition_Distance();

};

