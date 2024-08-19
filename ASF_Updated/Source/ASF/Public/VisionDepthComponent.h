#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "VisionDepthDepthAnalysis.h"
#include "VisionDepthComponent.generated.h"

class UHeavyTask;
class UVisionDepthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UVisionDepthComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisionDepthMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> VisionCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisionRayNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionRayDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Directions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisionDepthDepthAnalysis DepthPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisionDepthComponent* MasterVisionDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVisionDepthComponent*> ActiveVisionDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeavyTask* VisionDepthTickTask;
    
public:
    UVisionDepthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VisionDepthTick();
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisionDepth(UVisionDepthComponent* _VisionDepth);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVisionDepthDepthAnalysis> GetVisionDepthPath();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FVisionDepthDepthAnalysis> GetPathRecursively(FVisionDepthDepthAnalysis& prevPath);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddVisionDepth(UVisionDepthComponent* _VisionDepth);
    
};

