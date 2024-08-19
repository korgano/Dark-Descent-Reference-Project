#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "DataMove.h"
#include "AIActionSquad.generated.h"

class AAIController;
class APawn;
class ASquad;

UCLASS(Blueprintable)
class ASF_API UAIActionSquad : public UAIAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataMove DataMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerCommand;
    
public:
    UAIActionSquad();

    UFUNCTION(BlueprintCallable)
    void SetPlayerCommand(bool _bPlayerCommand);
    
    UFUNCTION(BlueprintCallable)
    void SetDataMove(FDataMove _DataMove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASquad* GetSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataMove GetDataMove() const;
    
};

