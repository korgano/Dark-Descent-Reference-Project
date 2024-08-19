#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASFCharacterMovementComponent.h"
#include "Event_UASFCharacterMovementComponent_Float_FloatDelegate.h"
#include "ASFAlienMovementComponent.generated.h"

class AAIController_Alien;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASFAlienMovementComponent : public UASFCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UASFCharacterMovementComponent_Float_Float OnTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> JumpObstacle_Query;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmoothMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIdMovePoints;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceWithDestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController_Alien* AlienController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> MovePoints;
    
public:
    UASFAlienMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Turning(float Angle, float Delay);
    
    UFUNCTION(BlueprintCallable)
    void SetPathPoints(const TArray<FVector>& NewPathPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetMovePoints(const TArray<FVector>& _MovePoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetPathPoints();
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetMovePoints();
    
    UFUNCTION(BlueprintCallable)
    void EnableSmoothMove(const TArray<FVector>& _MovePoints);
    
    UFUNCTION(BlueprintCallable)
    void DisableSmoothMove();
    
};

