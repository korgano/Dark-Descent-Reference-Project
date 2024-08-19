#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavFilter_AIControllerDefault.h"
#include "Templates/SubclassOf.h"
#include "ASFNavFilter_AIControllerDefault.generated.h"

class UInfluenceMapFilter;

UCLASS(Blueprintable)
class ASF_API UASFNavFilter_AIControllerDefault : public UNavFilter_AIControllerDefault {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInfluenceMapFilter> InfluenceMapQueryFilterClass;
    
public:
    UASFNavFilter_AIControllerDefault();

};

