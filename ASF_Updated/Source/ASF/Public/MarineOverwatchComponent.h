#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EnumOverwatchType.h"
#include "MarineOverwatchComponent.generated.h"

class AHumanoid;
class UOverwatchObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMarineOverwatchComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Allow360Check;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSingleMarineOnPlayerFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMultiMarineOnPlayerFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLeaderOnPlayerFocus;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumOverwatchType, UOverwatchObject*> AvailableOverwatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
    UMarineOverwatchComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitActions(AHumanoid* _Humanoid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> GetOverwatch(const TArray<EnumOverwatchType>& OverwatchTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllow360Check();
    
};

