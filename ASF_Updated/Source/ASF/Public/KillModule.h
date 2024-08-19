#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DamageResultStruct.h"
#include "Event_Actor_EnumDestroyReasonDelegate.h"
#include "KillModule.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASF_API UKillModule : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Actor_EnumDestroyReason OnDestroy;
    
    UKillModule();

    UFUNCTION(BlueprintCallable)
    void StopComponents(AActor* _ActorToKill);
    
    UFUNCTION(BlueprintCallable)
    void Kill(AActor* _ActorToKill, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void DestroyProperly(AActor* _ActorToKill);
    
};

