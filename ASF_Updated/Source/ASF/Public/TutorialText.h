#pragma once
#include "CoreMinimal.h"
#include "TutorialText.generated.h"

USTRUCT(BlueprintType)
struct FTutorialText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBulletPoint;
    
    ASF_API FTutorialText();
};

