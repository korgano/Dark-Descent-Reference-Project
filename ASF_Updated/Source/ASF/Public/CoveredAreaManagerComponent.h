#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FOVSegmentVision.h"
#include "CoveredAreaManagerComponent.generated.h"

class UTargetableObjectData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCoveredAreaManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectorNumber;
    
    UCoveredAreaManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveWeightToDirection(FVector2D Direction, UTargetableObjectData* Target);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetWeightPerSegment(FVector Origine, const TArray<FFOVSegmentVision>& SegmentVisionArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeightForDirection(FVector2D Direction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSectorNbr() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetFirstValideSegmentIndex(FVector Origine, const TArray<FFOVSegmentVision>& SegmentVisionArray, float Threshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnglePerSector() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWeightToDirection(FVector2D Direction, UTargetableObjectData* Target);
    
};

