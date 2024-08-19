#pragma once
#include "CoreMinimal.h"
#include "SpawnDeferredDynamicDelegateDelegate.h"
#include "SpawnGroup.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct ASF_API FSpawnGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> ClassesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnDeferredDynamicDelegate DelegateToCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDelegate;
    
    FSpawnGroup();
};

