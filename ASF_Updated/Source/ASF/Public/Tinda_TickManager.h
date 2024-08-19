#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Event_TickManagerTickDelegate.h"
#include "Tinda_TickManager.generated.h"

class ATinda_TickManager;
class UObject;

UCLASS(Blueprintable)
class ATinda_TickManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TickManagerTick OnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreGlobalTimeDilation;
    
    ATinda_TickManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATinda_TickManager* GetTinda_TickManager(const UObject* _WorldRef);
    
};

