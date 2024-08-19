#pragma once
#include "CoreMinimal.h"
#include "EConcernCategory.generated.h"

UENUM(BlueprintType)
enum class EConcernCategory : uint8 {
    pfenum_None,
    pfenum_OffensiveContent,
    pfenum_ChildExploitation,
    pfenum_MalwareOrVirus,
    pfenum_PrivacyConcerns,
    pfenum_MisleadingApp,
    pfenum_PoorPerformance,
    pfenum_ReviewResponse,
    pfenum_SpamAdvertising,
    pfenum_Profanity,
};

