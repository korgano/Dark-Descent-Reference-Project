#pragma once
#include "CoreMinimal.h"
#include "CodexEntry.h"
#include "CodexEntries.generated.h"

USTRUCT(BlueprintType)
struct FCodexEntries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCodexEntry> Entries;
    
    ASF_API FCodexEntries();
};

