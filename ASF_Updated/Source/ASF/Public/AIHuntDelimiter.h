#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CharacterIDName.h"
#include "AIHuntDelimiter.generated.h"

class AAIHuntDelimiter;
class AASFGameModeBase_TacticalMode;
class ASubLevelHandler;

UCLASS(Blueprintable)
class ASF_API AAIHuntDelimiter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> HuntRoomPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterIDName> LimitedCharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRoomClusterReady;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> HuntRoomGraphID;
    
public:
    AAIHuntDelimiter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<int64> GetHuntRoomGraphID() const;
    
    UFUNCTION(BlueprintCallable)
    static AAIHuntDelimiter* GetAIHuntDelimiter(FCharacterIDName _CharacterIDName);
    
};

