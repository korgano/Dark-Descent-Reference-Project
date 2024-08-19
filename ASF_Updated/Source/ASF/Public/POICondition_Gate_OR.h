#pragma once
#include "CoreMinimal.h"
#include "POICondition.h"
#include "POICondition_Gate_OR.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_Gate_OR : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPOICondition*> FilterCondition;
    
public:
    UPOICondition_Gate_OR();

};

