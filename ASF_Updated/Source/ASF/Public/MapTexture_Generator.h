#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapTexture_Generator.generated.h"

UCLASS(Blueprintable)
class ASF_API AMapTexture_Generator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundHeight;
    
public:
    AMapTexture_Generator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Set_AllActors_VisibleInSceneCapture();
    
    UFUNCTION(BlueprintCallable)
    void Set_AllActors_Visible();
    
    UFUNCTION(BlueprintCallable)
    void Set_Actors_HiddenToSceneCapture_WithinRangeOfGroundZ(const float Height, const float MinDist, const float MaxDist);
    
    UFUNCTION(BlueprintCallable)
    void Set_ActorMeshsHiddenToSceneCapture(AActor* Actor, bool Hidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GuessLVLExtent();
    
};

