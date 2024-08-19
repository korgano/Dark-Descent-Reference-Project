#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "ASFLevelScriptActorBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASF_API AASFLevelScriptActorBase : public ALevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelLogs;
    
public:
    AASFLevelScriptActorBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnActorPropertyChanged(AActor* ActorChanged, FName PropertyChanged);
    
};

