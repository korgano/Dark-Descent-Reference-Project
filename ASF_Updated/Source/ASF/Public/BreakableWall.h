#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "Event_BreakableWall_BreakDelegate.h"
#include "MatScalarParameter.h"
#include "BreakableWall.generated.h"

class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ABreakableWall : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_BreakableWall_Break OnWallBreaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatScalarParameter> MaterialScalarParameters;
    
    ABreakableWall(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoC4Explosion(FTransform _Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AskDemolition(FVector _ImpactLocation);
    
};

