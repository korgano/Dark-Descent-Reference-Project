#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EAntiAircraft_MissileState.h"
#include "Event_MissileDelegate.h"
#include "AntiAircraft_Missile.generated.h"

class UMissile_DataAsset;

UCLASS(Blueprintable)
class ASF_API AAntiAircraft_Missile : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MissileTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAntiAircraft_MissileState AntiAircraft_MissileState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Missile AntiAircraft_MissileStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissile_DataAsset* PDA_Missile;
    
    AAntiAircraft_Missile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMissileState(EAntiAircraft_MissileState _AntiAircraft_MissileState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireMissile(AActor* _Target, FVector _TargetLocation, float DelayBeforeLaunch);
    
};

