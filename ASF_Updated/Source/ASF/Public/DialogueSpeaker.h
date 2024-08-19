#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnumAcknowSpeaker.h"
#include "DialogueSpeaker.generated.h"

USTRUCT(BlueprintType)
struct FDialogueSpeaker : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAcknowSpeaker Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    ASF_API FDialogueSpeaker();
};

