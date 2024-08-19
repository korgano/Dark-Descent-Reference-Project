#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FOWRevertedRenderTextureDrawer.h"
#include "FOWRevertedRenderTextureGDrawer.generated.h"

class AFOWRevertedManagerActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UFOWRevertedRenderTextureGDrawer : public UFOWRevertedRenderTextureDrawer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GeometryCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GeometryCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bDrewOnce;
    
public:
    UFOWRevertedRenderTextureGDrawer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SortGeometryCoordinate();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetDrawOnce();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFOWManagerFrameComputed(AFOWRevertedManagerActor* FOW);
    
    UFUNCTION(BlueprintCallable)
    void GenerateGeometryCenterPoint();
    
public:
    UFUNCTION(BlueprintCallable)
    void DrawOnce();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddGeometryCenterOffset();
    
};

