#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Cmp_MapTexture_ScenePreparation.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCmp_MapTexture_ScenePreparation : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundHeight;
    
    UCmp_MapTexture_ScenePreparation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Set_Actors_HiddenToSceneCapture_WithinRangeOfGroundZ(const float Height, const float MinDist, const float MaxDist);
    
    UFUNCTION(BlueprintCallable)
    void Set_ActorMeshsHiddenToSceneCapture(AActor* Actor, bool Hidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareScene();
    
};

