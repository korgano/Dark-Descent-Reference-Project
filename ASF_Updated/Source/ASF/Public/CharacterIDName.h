#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.generated.h"

USTRUCT(BlueprintType)
struct FCharacterIDName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString CharacterIDName;
    
    ASF_API FCharacterIDName();
};
FORCEINLINE uint32 GetTypeHash(const FCharacterIDName) { return 0; }

