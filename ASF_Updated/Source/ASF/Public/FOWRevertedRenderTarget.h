#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FOWRevertedRenderTarget.generated.h"

class AFOWRevertedManagerActor;
class UFOWRevertedRenderTextureDrawer;
class UTexture2D;

UCLASS(Blueprintable)
class ASF_API AFOWRevertedRenderTarget : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFOWRevertedManagerActor* FOWManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlanSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlanLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FictiveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> TextureBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 motherRenderTextureBufferIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubChunkTextureBufferIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFOWRevertedRenderTextureDrawer*> Drawers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> posX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> posY;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> savedBuffer;
    
public:
    AFOWRevertedRenderTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetManager(AFOWRevertedManagerActor* Manager);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveVision();
    
    UFUNCTION(BlueprintCallable)
    void InitRenderTarget(FVector RealPosition, FVector PipelineRenderingOffset, FVector Scale, int32 TextureDefinition, int32 ID, int32 NewMotherRenderTextureBufferIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitialiseTextureParam(int32 size_X, int32 size_Y, int32 NewMotherRenderTextureBufferIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTexturePositionAt(FVector2D coordinate);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMotherTexturePositionAt(FVector2D coordinate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetGeneratedTexture() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetFOWStateAt(FVector2D coordinate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateTexture(const TArray<FVector>& Coordinates, const FVector& Center, float Radius);
    
    UFUNCTION(BlueprintCallable)
    bool CreateRenderTargetMaskByManagerChunk();
    
    UFUNCTION(BlueprintCallable)
    bool ClearRenderTargetFOW();
    
    UFUNCTION(BlueprintCallable)
    void ClearRenderTarget();
    
};

