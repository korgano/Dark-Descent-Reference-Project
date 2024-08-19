#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "Event_NoMulti_TriggerObjective_ActorDelegate.h"
#include "TriggerBoxBindingStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTriggerBoxBindingStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterIDName> ActorIDToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbTriggerAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConsideringLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_NoMulti_TriggerObjective_Actor EnterDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_NoMulti_TriggerObjective_Actor FirstEnterDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_NoMulti_TriggerObjective_Actor LeaveDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_NoMulti_TriggerObjective_Actor LastLeaveDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeTriggeredByDrone;
    
    ASF_API FTriggerBoxBindingStruct();
};

