#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "CampaignParameters.h"
#include "CampaignSlotSaveGame.generated.h"

UCLASS(Blueprintable)
class ASF_API UCampaignSlotSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignParameters CampaignParameters;
    
    UCampaignSlotSaveGame();

};

