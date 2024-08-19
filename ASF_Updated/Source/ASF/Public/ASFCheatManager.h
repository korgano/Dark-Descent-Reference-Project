#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "Templates/SubclassOf.h"
#include "ASFCheatManager.generated.h"

class AASFCheatActor;

UCLASS(Blueprintable)
class ASF_API UASFCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool cheatsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCheatActor* CheatActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AASFCheatActor> CheatActorClass;
    
    UASFCheatManager();

    UFUNCTION(BlueprintCallable)
    void SetCheatsActivated(bool newCheatsActivated);
    
};

