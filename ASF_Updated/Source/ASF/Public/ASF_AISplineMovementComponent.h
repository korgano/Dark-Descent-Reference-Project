#pragma once
#include "CoreMinimal.h"
#include "ASM_AISplineMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "Event_Action_PathBuiltDelegate.h"
#include "Event_UASF_AISplineMovementComponentDelegate.h"
#include "Templates/SubclassOf.h"
//#include "GameplayTask.h"
#include "ASF_AISplineMovementComponent.generated.h"

class AASFCharacter;
class AActor;
class UNavigationPath;
class UNavigationQueryFilter;
class USplineComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASF_AISplineMovementComponent : public UASM_AISplineMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Action_PathBuilt PathBuild;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UASF_AISplineMovementComponent OnPathModified;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Updating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineReachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReachPointNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> UpdatedSpline_ReachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPathUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepathBlockedTillIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartMoveCanBeDelayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BUseFailSafeMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> MovementQueryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float stuckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float stuckTime_Threshold;
    
public:
    UASF_AISplineMovementComponent();

    UFUNCTION(BlueprintCallable)
    void StartMove();
    
    UFUNCTION(BlueprintCallable)
    bool InjectSplinePoint(const TArray<FVector>& SplinePoint, int32 blockRepathTillIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetSplineMovableActorData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSplineComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextSplinePointId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNavigationPath* GetNavPathPtr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistToNextTurn(float _minAnle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDistanceAlongSpline();
    
    UFUNCTION(BlueprintCallable)
    void FindNavPath_External(bool _Updating);
    
    UFUNCTION(BlueprintCallable)
    void ClearSpline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CleanPathFromStraightPathPoints(UPARAM(Ref) TArray<FVector>& _SourcePathPoints, TArray<FVector>& _NewPathPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CleanPathFromDoor(AASFCharacter* _Chara, UPARAM(Ref) TArray<FVector>& _SourcePathPoints, TArray<FVector>& _NewPathPoints);
    
    UFUNCTION(BlueprintCallable)
    bool CanRepath();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> AlterPath();
    
};

