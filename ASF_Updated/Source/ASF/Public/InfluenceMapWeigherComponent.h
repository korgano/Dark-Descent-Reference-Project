#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Event_UInfluenceMapWeigherComponentDelegate.h"
#include "Polygone.h"
#include "Templates/SubclassOf.h"
#include "InfluenceMapWeigherComponent.generated.h"

class AASFGameModeBase_TacticalMode;
class AInfluenceMapManager;
class UCurveFloat;
class UInfluenceMapArea;
class UInfluenceMapQuery;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInfluenceMapWeigherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UInfluenceMapWeigherComponent OnWeighterDisable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UInfluenceMapWeigherComponent OnWeighterRefreshing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInfluenceMapArea> WeigherAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> WeighterPotentialFactionInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BinaryInfluenceMaskChunkNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FactionWeighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsTemporary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bInfluenceDecreaseOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNavBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsGhostWeighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bUseExternalWeighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InfluenceGivenFactionOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvalidateNavigationOnNewGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float InfluencingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InfluencingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ExternalWeighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInfluenceMapQuery* InfluenceMapQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BinaryInfluenceMaskCellNbr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BinaryInfluenceMaskWorldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolygone> InfluenceGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNewGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> NavTileHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> WeighterFactionInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfluenceMapManager* InfluenceMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TopLeftChunkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WeigtedChunk;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInfluenceMapArea* WeigherArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float activationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 FactionMask;
    
public:
    UInfluenceMapWeigherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeigherAreaClass(TSubclassOf<UInfluenceMapArea> _WeigherAreaClass);
    
    UFUNCTION(BlueprintCallable)
    void SetUseExternalWeighting(bool _bUseExternalWeighting);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTemporary(bool _bIsTemporary);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGhostWeighting(bool _bIsGhostWeighting);
    
    UFUNCTION(BlueprintCallable)
    void SetInfluencingTime(float _InfluencingTime);
    
    UFUNCTION(BlueprintCallable)
    void SetInfluenceMapQuery(UInfluenceMapQuery* _InfluenceMapQuery);
    
    UFUNCTION(BlueprintCallable)
    void SetInfluenceGeometry(const TArray<FPolygone>& _InfluenceGeometry);
    
    UFUNCTION(BlueprintCallable)
    void SetInfluenceDecreaseOverTime(bool _bInfluenceDecreaseOverTime);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInfluencedFaction(FGameplayTag _InfluencedFaction);
    
    UFUNCTION(BlueprintCallable)
    void RemoveExternalWeighter(UObject* _ExternalWeighter, float _WeightMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RefreshWeigher();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInfluenceMapSet(AASFGameModeBase_TacticalMode* _GameMode, AInfluenceMapManager* _InfluenceMapManager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInfluenceMapDeleted(AInfluenceMapManager* _InfluenceMapManager);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfluencingFaction(FGameplayTag _InfluencedFaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfluencingAnyFaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfluencingAllFaction() const;
    
    UFUNCTION(BlueprintCallable)
    void InitWeigher(AInfluenceMapManager* _InfluenceMapManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeightMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeigherAreaID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseExternalWeighting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGhostWeighting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInfluencingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInfluenceMapQuery* GetInfluenceMapQuery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInfluenceMapManager* GetInfluenceMapManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPolygone> GetInfluenceGeometry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBinaryInfluenceMaskCellNbr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActivationTime() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPolygone> GeneratePathQuadGeometryMask(FVector _GeometryLocation, TArray<FVector> _PathPoints, int32 _Width, bool _LocalCoordinate);
    
    UFUNCTION(BlueprintCallable)
    static FPolygone GenerateLineQuadGeometryMask(FVector _GeometryLocation, FVector _Start, FVector _End, int32 _Width, bool _LocalCoordinate);
    
    UFUNCTION(BlueprintCallable)
    static FPolygone GenerateGeometryMaskByRay(FVector _GeometryLocation, const TArray<FVector>& _Rays, FVector _Direction, float _Width, float _Angle, bool _OriginVertex, bool _LocalCoordinate);
    
    UFUNCTION(BlueprintCallable)
    static FPolygone GenerateConeGeometryMask(FVector _GeometryLocation, FVector _Start, FVector _Direction, float _Width, float _Angle, bool _LocalCoordinate);
    
    UFUNCTION(BlueprintCallable)
    static FPolygone GenerateCircleGeometryMask(FVector _GeometryLocation, int32 _PointNbr, int32 _Radius, bool _LocalCoordinate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableWeighter();
    
    UFUNCTION(BlueprintCallable)
    void DisableWeighter();
    
    UFUNCTION(BlueprintCallable)
    void ClearWeigtedChunk();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearExternalWeighter();
    
    UFUNCTION(BlueprintCallable)
    void AddInfluencedFaction(FGameplayTag _InfluencedFaction);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalWeighter(UObject* _ExternalWeighter, float _WeightMultiplier);
    
};

