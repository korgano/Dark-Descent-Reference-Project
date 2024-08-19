#pragma once
#include "CoreMinimal.h"
#include "POICondition.h"
#include "Templates/SubclassOf.h"
#include "POICondition_IsInteracting.generated.h"

class UInteractiveComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_IsInteracting : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UInteractiveComponent>> Interaction;
    
public:
    UPOICondition_IsInteracting();

};

