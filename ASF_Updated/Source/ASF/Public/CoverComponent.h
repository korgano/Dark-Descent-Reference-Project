#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "DamageResultStruct.h"
#include "ECoverType.h"
#include "Event_CoverDelegate.h"
#include "Event_FlankingStatusUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoverComponent.generated.h"

class AASFCharacter;
class AStaticMeshActor;
class UAIPointOfInterestVolatile;
class UPOIDefaultContainer;
class UPointOfInterest_DataAsset;
class URoomGraph_Cover;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Cover CoverUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_FlankingStatusUpdated OnFlankingStatusUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> CoverEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStaticMeshActor> CoverPrevisualisationActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverProtectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* CoverPrevisualisationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverStateUpdate_Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeAuthorizedOutsideCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bUnderCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector CoverPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCoverDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* CoverEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomGraph_Cover* RoomGraph_Cover;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimeSpentOutsideCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterest_DataAsset* CoverPoiDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThreatLocation;
    
public:
    UCoverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update();
    
private:
    UFUNCTION(BlueprintCallable)
    void Undercover();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopCoverSystem();
    
    UFUNCTION(BlueprintCallable)
    void StartCoverSystem();
    
    UFUNCTION(BlueprintCallable)
    void SetEQSData(UPointOfInterest_DataAsset* _CoverPoiDataAsset, FVector _ThreatPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetCoverDisplay(bool _bCoverDisplay);
    
    UFUNCTION(BlueprintCallable)
    void SaveCoverPosition(FVector _CoverPosition, bool _ReserveCover, URoomGraph_Cover* _RoomGraph_Cover);
    
    UFUNCTION(BlueprintCallable)
    FVector RetrieveSearchLocation(FVector _CoverSearchPoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(AASFCharacter* _ASFCharacter, const FDamageResultStruct& _DamageResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void NotUndercover(bool _AuthorizeTimeOutsideCover);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderCoverFromLocation(FVector _ThreatLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsCloseToCover() const;
    
    UFUNCTION(BlueprintCallable)
    void InitCoverSystem(AASFCharacter* _Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetThreatLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSegmentDistanceThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URoomGraph_Cover* GetRoomGraph_Cover() const;
    
    UFUNCTION(BlueprintCallable)
    void GetPotentialCoversFromResult(UPOIDefaultContainer* _SenseResult, FVector CoverSearchLocation, FVector _ThreatLocation, float coverDist, TArray<FVector>& _OutLocations);
    
    UFUNCTION(BlueprintCallable)
    UAIPointOfInterestVolatile* GetPotentialCoversFromLocation(FVector _ThreatLocation, FVector _OverrideSearchLocation, UPointOfInterest_DataAsset* _POICover_DataAsset, TArray<FVector>& _OutLocations);
    
    /*UFUNCTION(BlueprintCallable)
    void GetFlankingStatus(UPARAM(Ref) FEvent_FlankingStatusUpdated& FlankingStatusUpdated);*/
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoverProtectionAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPointOfInterest_DataAsset* GetCoverPoi_DataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCoverLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECoverType GetCoverDodgeType(FVector _ThreatLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCoverDisplay() const;
    
};

