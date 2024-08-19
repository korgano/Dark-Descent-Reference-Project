#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "InfluenceMapQuery.generated.h"

class UInfluenceMapFilter;

UCLASS(Blueprintable)
class ASF_API UInfluenceMapQuery : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInfluenceMapFilter> QueryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueryID;
    
    UInfluenceMapQuery();

};

