#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "Event_AInfluenceMapManagerDelegate.h"
#include "InfluenceMapCell.h"
#include "InfluenceMapCellHeader.h"
#include "InfluenceMapDebugQuerier.h"
#include "InfluenceMapTilePolyCell.h"
#include "InfluenceMapTilePolyCellHeader.h"
#include "Templates/SubclassOf.h"
#include "WeigherMaskOffset.h"
#include "InfluenceMapManager.generated.h"

class AASFGameModeBase_TacticalMode;
class ARoomCluster;
class UHeavyTask;
class UInfluenceMapArea;
class UInfluenceMapChunk;
class UInfluenceMapFilter;
class UInfluenceMapQuery;
class UInfluenceMapWeigherComponent;
class UMaterialInstanceDynamic;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class ASF_API AInfluenceMapManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARoomCluster* RoomCluster;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AInfluenceMapManager OnInfluenceMapDeleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AInfluenceMapManager OnInfluenceMapUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWeigherMultiThreadActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowNavigationInvalidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UInfluenceMapArea>> InfluenceMapAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UInfluenceMapFilter>> InfluenceMapFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> InfluenceMapFactionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InfluenceMapCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfluenceMapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfluenceMapCellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfluenceMapChunkCellNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeavyTask* InfluenceMapTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InfluenceMapTopLeftPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfluenceMapRowCellNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfluenceMapRowChunkNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInfluenceMapWeigherComponent*> Weighers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NavBlockerModification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedDataSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInfluenceMapChunk*> Chunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInfluenceMapQuery* DefaultQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> QuerierID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, UInfluenceMapQuery*> Querier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfluenceMapCell> InfluenceMapCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfluenceMapCellHeader> InfluenceMapCellHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfluenceMapTilePolyCell> InfluenceMapTilePolyCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfluenceMapTilePolyCellHeader> InfluenceMapTilePolyCellHeader;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InfluenceMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* M_InfluenceMapDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInfluenceMapDebugQuerier DebugQuerier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugPolyCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PolyTileIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PolyCellIdx;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFGameModeBase_TacticalMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInfluenceMapArea*> InfluenceMapArea;
    
public:
    AInfluenceMapManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateNavBlocker(FGameplayTag _UpdatedFaction);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterQuery(UObject* _Owner);
    
    UFUNCTION(BlueprintCallable)
    void UnLockInfluenceMapData();
    
    UFUNCTION(BlueprintCallable)
    void SwapInfluenceMapData();
    
    UFUNCTION(BlueprintCallable)
    void SwapChunkInfluenceMapData();
    
    UFUNCTION(BlueprintCallable)
    void StartInfluenceMaskGeneration_Thread();
    
    UFUNCTION(BlueprintCallable)
    void SetInfluenceMapScale(int32 _InfluenceMapScale);
    
    UFUNCTION(BlueprintCallable)
    void SetInfluenceMapDebugQuerier(FInfluenceMapDebugQuerier _DebugQuerier);
    
    UFUNCTION(BlueprintCallable)
    void SetInfluenceMapCenterPosition(FVector _InfluenceMapCenter);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugPolyCell(bool _DebugPolyCell);
    
    UFUNCTION(BlueprintCallable)
    void SelectPolyCellByLocation(FVector _WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResizeTilePolyCell(int32 Size);
    
    UFUNCTION(BlueprintCallable)
    void ResizePolyCell(int32 TileIdx, int32 NewSize);
    
    UFUNCTION(BlueprintCallable)
    void ResetPolyCell(int32 TileIdx, int32 CellIdx);
    
    UFUNCTION(BlueprintCallable)
    void RequestDataSwap();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWeigher(UInfluenceMapWeigherComponent* _Weigher, bool _Saving);
    
    UFUNCTION(BlueprintCallable)
    void RegisterQuery(UObject* _Owner);
    
    UFUNCTION(BlueprintCallable)
    void OnWeighGenerationByChunkEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterSet(ARoomCluster* _RoomCluster);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockInfluenceMapData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCellInfluencedByArea(const FInfluenceMapCell& _InfluenceMapCell, TSubclassOf<UInfluenceMapArea> _InfluenceMapAreaClass) const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateWeighterNavigation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitInfluenceMapUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitInfluenceMapData();
    
    UFUNCTION(BlueprintCallable)
    static bool GetUseInfluenceMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetUpdatedChunkIndex(const TArray<int32>& _UpdatedChunk, int32 BinaryInfluenceMaskChunkNbr, int32 TopLeftChunkIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UInfluenceMapQuery* GetQuery(UObject* _Owner, TSubclassOf<UInfluenceMapFilter> _InfluenceMapFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGenerated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInfluenceMapTopLeftPos() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FInfluenceMapTilePolyCellHeader> GetInfluenceMapTilePolyCellHeader();
    
    UFUNCTION(BlueprintCallable)
    TArray<FInfluenceMapTilePolyCell> GetInfluenceMapTilePolyCell();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfluenceMapScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfluenceMapRowChunkNbr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfluenceMapRowCellNbr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfluenceMapChunkCellNbr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInfluenceMapCenter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfluenceMapCellSize() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FInfluenceMapCellHeader> GetInfluenceMapCellHeader();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInfluenceMapArea* GetInfluenceMapArea(int32 _AreaID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetChunkTopLeft(int32 _ChunkIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChunkIndex(FVector _WorldPosition) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateInfluenceMapTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeigherMaskOffset FindMaskOffset(int32 _ChunkIndex, int32 BinaryInfluenceMaskCellNbr, int32 BinaryInfluenceMaskChunkNbr, int32 TopLeftChunkIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindCellIndexInPlan(int32 _TopLeftChunkIndex, int32 _X, int32 _Y) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInfluenceMapCell FindCellAtLocation(FVector _WorldLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void AddWeigher(UInfluenceMapWeigherComponent* _Weigher, bool _FromSave);
    
};

