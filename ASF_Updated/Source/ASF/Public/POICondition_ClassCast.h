#pragma once
#include "CoreMinimal.h"
#include "POICondition.h"
#include "POICondition_ClassCast.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_ClassCast : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassCast;
    
public:
    UPOICondition_ClassCast();

};

