#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIPointOfInterestVolatile.h"
#include "AIPointOfInterestVolatile_Cover.generated.h"

class AASFGameState_TacticalMode;
class URoomGraph_Cover;

UCLASS(Blueprintable)
class ASF_API UAIPointOfInterestVolatile_Cover : public UAIPointOfInterestVolatile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomGraph_Cover* RoomGraphCover;
    
public:
    UAIPointOfInterestVolatile_Cover();

protected:
    UFUNCTION(BlueprintCallable)
    void RegenerateContainer(AASFGameState_TacticalMode* _GameState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoveredFromThreat(FVector _QuerierPosition, FVector _PositionToCoverm, float _ProtectionAngle) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> FindCoverSpots(FVector _QuerierPosition, FVector _PositionToCover, bool _FromDirection, TArray<FVector>& _Segment, float _ProtectionAngle, float _MaxDistance);
    
};

