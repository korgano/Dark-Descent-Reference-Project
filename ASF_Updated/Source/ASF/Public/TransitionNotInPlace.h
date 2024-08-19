#pragma once
#include "CoreMinimal.h"
#include "SubLevelID.h"
#include "TransitionNotInPlace.generated.h"

class AEntryPoint;

USTRUCT(BlueprintType)
struct FTransitionNotInPlace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID SubLevelNameFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID SubLevelNameTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEntryPoint* EntryPoint;
    
    ASF_API FTransitionNotInPlace();
};

