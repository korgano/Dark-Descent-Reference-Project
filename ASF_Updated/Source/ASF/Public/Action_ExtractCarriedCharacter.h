#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "DataMove.h"
#include "Templates/SubclassOf.h"
#include "Action_ExtractCarriedCharacter.generated.h"

class AActor;
class AExtractionTransport;
class UAction_ExtractCarriedCharacter;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UAction_ExtractCarriedCharacter : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExtractionTransport* ExtractionTransport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* InteractingEffect;
    
    UAction_ExtractCarriedCharacter();

    UFUNCTION(BlueprintCallable)
    static UAction_ExtractCarriedCharacter* Create_Action_ExtractCarriedCharacter(AActor* _Context, TSubclassOf<UAction_ExtractCarriedCharacter> _ActionClass, FDataMove _DataMove, AExtractionTransport* _ExtractionTransport);
    
};

