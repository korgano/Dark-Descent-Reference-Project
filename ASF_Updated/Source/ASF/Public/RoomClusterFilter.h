#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "RoomClusterFilter.generated.h"

class URoomClusterGraph;

UCLASS(Blueprintable)
class ASF_API URoomClusterFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoomClusterGraph> RoomClusterGraphClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery InvalidatePathAreaTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForceValidatePathAreaTags;
    
    URoomClusterFilter();

};

