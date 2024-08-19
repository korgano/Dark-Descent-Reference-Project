#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CurvedProjectile.generated.h"

class UDynamiqueSaveLoadComponent;
class USceneComponent;
class USplineComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASF_API ACurvedProjectile : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamiqueSaveLoadComponent* DynamicSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool MotionStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    ACurvedProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMotion(FVector _Destination);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectileDestination(FVector _Destination);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuildSpline(FVector _Destination);
    
};

