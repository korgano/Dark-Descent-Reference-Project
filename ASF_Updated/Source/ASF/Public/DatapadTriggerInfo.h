#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "DatapadTriggerInfo.generated.h"

class UDataPad_DataAsset;

UCLASS(Blueprintable)
class ASF_API UDatapadTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecificDatapad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataPad_DataAsset> SpecificDatapadRef;
    
    UDatapadTriggerInfo();

};

