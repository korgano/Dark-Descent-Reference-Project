#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "CampaignParameters.h"
#include "MetaDataSaveStruct.h"
#include "MetaDataSaveGame_v1.generated.h"

UCLASS(Blueprintable)
class ASF_API UMetaDataSaveGame_v1 : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaDataSaveStruct MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignParameters CampaignParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CampaignSlot;
    
    UMetaDataSaveGame_v1();

};

