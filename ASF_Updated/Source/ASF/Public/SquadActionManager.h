#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Event_SquadActionManager_SquadDelegate.h"
#include "SquadActionManager.generated.h"

class ASquad;
class UActionSquadPrioritySystem;

UCLASS(Blueprintable)
class ASF_API USquadActionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SquadActionManager_Squad OnSetSquad;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionSquadPrioritySystem* ActionSquadPrioritySystem;
    
    USquadActionManager();

    UFUNCTION(BlueprintCallable)
    void SetSquad(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActionSquadPrioritySystem* GetActionSquadPrioritySystem();
    
};

