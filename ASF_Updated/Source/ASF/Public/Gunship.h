#pragma once
#include "CoreMinimal.h"
#include "ASFCharacter.h"
#include "EnumAIActionStatus.h"
#include "Gunship.generated.h"

class UAIAction;
class UAIActionComponent;
class UGunShipClassDataAsset;
class UPOITargetingComponent;

UCLASS(Blueprintable)
class ASF_API AGunship : public AASFCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGunShipClassDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOITargetingComponent* POITargetingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIActionComponent* AIActionComponent;
    
public:
    AGunship(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnScriptedActionStop(UAIActionComponent* _AIActionComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnScriptedActionStart(UAIActionComponent* _AIActionComponent, bool _ForceActionAbort, bool _ForceAnimationAbort);
    
    UFUNCTION(BlueprintCallable)
    void OnExecutedActionChanged(UAIActionComponent* _AIActionComponent, UAIAction* _OldAction, UAIAction* _NewAction);
    
    UFUNCTION(BlueprintCallable)
    void OnActionStop(UAIActionComponent* _AIActionComponent, UAIAction* _Action, EnumAIActionStatus _AIActionStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnActionStart(UAIActionComponent* _AIActionComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGunShipClassDataAsset* GetGunshipDataAsset() const;
    
};

