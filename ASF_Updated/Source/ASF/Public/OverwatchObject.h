#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "OverwatchObject.generated.h"

class AActor;
class UMarineOverwatchComponent;
class UWorld;

UCLASS(Blueprintable)
class ASF_API UOverwatchObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMarineOverwatchComponent* OverwatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDisplay;
    
    UOverwatchObject();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(UWorld* _World, UMarineOverwatchComponent* _OverwatchComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> GetInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ConsumeBestTarget();
    
};

