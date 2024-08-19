#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EnumFOWVisionType.h"
#include "Event_AFOWRevertedManagerActorDelegate.h"
#include "FOWMotherRenderTexture.h"
#include "FOWTextureSubChunk.h"
#include "FOWRevertedManagerActor.generated.h"

class AFOWRevertedRenderTarget;
class UFOWRevertedRenderTextureDrawer;
class UHeavyTask;
class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable)
class ASF_API AFOWRevertedManagerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TileScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TileNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureChunkSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimapTextureChunkSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimapMT_TextureChunkSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GiveFullVision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFOWShaderAplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDrawerMultiThreadActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseChunkTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFOWRevertedRenderTarget*> FOWTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FOWBottomLeftPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFOWRevertedRenderTextureDrawer*> AllDrawers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFOWRevertedRenderTextureDrawer*> Drawers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFOWRevertedRenderTextureDrawer*> DrawersComputing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOWMotherRenderTexture MotherRenderTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelNames;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AFOWRevertedManagerActor OnMaskCoordinateGenerated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AFOWRevertedManagerActor OnFOWManagerFrameComputed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AFOWRevertedManagerActor OnFOWManagerDeleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AFOWRevertedManagerActor OnMinimapFOWCleared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AFOWRevertedManagerActor OnBlackDrawFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool waitBlackDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFOWRevertedRenderTarget*> PreviouslyUpdatedTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFOWRevertedRenderTarget*> UpdatedTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeavyTask* FOWTickingTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pixelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D chunkTexturePlanSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinimapMTchunkTexturePlanSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector chunkTexturePlanBottomLeftPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SubchunkTexturePlanBottomLeftPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinimapMTchunkTexturePlanBottomLeftPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector chunkTextureOriginePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* generatedMotherRenderTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* generatedMotherRenderTextureChunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* generatedMotherRenderMinimapTextureChunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* generatedMotherRenderMinimapMTTextureChunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOWTextureSubChunk FOWTextureSubChunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* GameShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MapTexturePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MapTexturePlaneSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MTMinimapShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MinimapVisible;
    
public:
    AFOWRevertedManagerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D WorldToMinimapUV_Unclamped(FVector Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D WorldToMinimapUV(FVector Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D Vector_WorldToMinimapUV(FVector Vector) const;
    
    UFUNCTION(BlueprintCallable)
    void StopFOW();
    
    UFUNCTION(BlueprintCallable)
    void StartMaskGenerationByThread();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityOutlinePP(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void Save(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDrawer(UFOWRevertedRenderTextureDrawer* Drawer);
    
    UFUNCTION(BlueprintCallable)
    FVector RaycastOnFOW(FVector Begin, FVector End, EnumFOWVisionType FOWLimite, bool& _OutHasHit);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerHasVisibilityOnActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerHasVisibilityArround(FVector ActorPosition, int32 pixelLength, int32 pixelHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NeedToUpdatePP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector MinimapUVToWorld(FVector2D _UV) const;
    
    UFUNCTION(BlueprintCallable)
    void Load(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingFOWSubChunk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFOWBlackPartApplied() const;
    
    UFUNCTION(BlueprintCallable)
    void InitMotherRenderTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetwaitBlackDraw() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTileIndex(FVector ActorPosition);
    
    UFUNCTION(BlueprintCallable)
    EnumFOWVisionType GetPlayerVisibilityOnActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetMTMinimapShader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMinimapVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetMinimapShader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetGeneratedSubChunkTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetGeneratedMotherRenderTextureMinimapMTChunk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetGeneratedMotherRenderTextureMinimapChunk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetGeneratedMotherRenderTextureChunk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetGeneratedMotherRenderTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFOWTextureSubChunk GetFOWTextureSubChunk() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetFOWStateAt(FVector ActorPosition);
    
    UFUNCTION(BlueprintCallable)
    EnumFOWVisionType GetFOWStateAround(FVector ActorPosition, int32 pixelLength, int32 pixelHeight, int32 _LengthPrecision, int32 _HeightPrecision);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetAdjacentTiles(UFOWRevertedRenderTextureDrawer* Drawer, FVector Position, float Radius, TArray<int32>& OutTilesForUpdate);
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateRenderTargetTexture();
    
    UFUNCTION(BlueprintCallable)
    void GenerateMotherRenderTextureChunk(FVector Position, bool minimap);
    
    UFUNCTION(BlueprintCallable)
    void GenerateMotherRenderTargetTexture();
    
    UFUNCTION(BlueprintCallable)
    void GenerateMinimapMTRenderTextureChunk(FVector Position);
    
    UFUNCTION(BlueprintCallable)
    void EndMaskGeneration();
    
    UFUNCTION(BlueprintCallable)
    void ClearFOW(bool OnlyMinimap);
    
    UFUNCTION(BlueprintCallable)
    void AddDrawer(UFOWRevertedRenderTextureDrawer* Drawer);
    
};

