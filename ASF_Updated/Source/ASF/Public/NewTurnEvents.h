#pragma once
#include "CoreMinimal.h"
#include "NewTurnEvent_Asylum.h"
#include "NewTurnEvent_Laboratory.h"
#include "NewTurnEvent_Medbay.h"
#include "NewTurnEvent_TrainingRoom.h"
#include "NewTurnEvents.generated.h"

USTRUCT(BlueprintType)
struct FNewTurnEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewTurnEvent_Medbay> MedbayEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewTurnEvent_Asylum> AsylumEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewTurnEvent_TrainingRoom> TrainingRoomEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewTurnEvent_Laboratory> LaboratoryEvents;
    
    ASF_API FNewTurnEvents();
};

