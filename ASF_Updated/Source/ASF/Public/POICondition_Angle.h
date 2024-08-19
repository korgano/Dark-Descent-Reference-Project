#pragma once
#include "CoreMinimal.h"
#include "POICondition.h"
#include "POICondition_Angle.generated.h"

class UPOIDataBinder;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ASF_API UPOICondition_Angle : public UPOICondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOIDataBinder* MaxAngle;
    
public:
    UPOICondition_Angle();

};

