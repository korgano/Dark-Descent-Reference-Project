#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "DataMove.h"
#include "Templates/SubclassOf.h"
#include "Action_LeaveMission.generated.h"

class AActor;
class AExtractionTransport;
class UAction_LeaveMission;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UAction_LeaveMission : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExtractionTransport* ExtractionTransport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* InteractingEffect;
    
    UAction_LeaveMission();

    UFUNCTION(BlueprintCallable)
    AExtractionTransport* GetExtractionTranport();
    
    UFUNCTION(BlueprintCallable)
    static UAction_LeaveMission* Create_Action_LeaveMission(AActor* _Context, TSubclassOf<UAction_LeaveMission> _ActionClass, FDataMove _DataMove, AExtractionTransport* _ExtractionTransport);
    
};

