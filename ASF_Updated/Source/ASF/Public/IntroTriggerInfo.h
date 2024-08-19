#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "IntroTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UIntroTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EachRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpecificRunNum;
    
    UIntroTriggerInfo();

};

