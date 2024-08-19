#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EnemyTrackingContainer.h"
#include "Event_UEnnemyTrackingSystem_AASFCharacterDelegate.h"
#include "EnnemyTrackingSystem.generated.h"

class AASFCharacter;

UCLASS(Blueprintable)
class ASF_API UEnnemyTrackingSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UEnnemyTrackingSystem_AASFCharacter OnEnemyTrack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UEnnemyTrackingSystem_AASFCharacter OnEnemyLoseTrack;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FEnemyTrackingContainer> EnemyOnTrack;
    
public:
    UEnnemyTrackingSystem();

protected:
    UFUNCTION(BlueprintCallable)
    void UnRegisterEnemy(AASFCharacter* _EnemyTracking, FGameplayTag TrackingType);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveTrackingEnemy(AASFCharacter* _EnemyTracking, FGameplayTag TrackingType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterEnemy(AASFCharacter* _EnemyTracking, FGameplayTag TrackingType);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HisEnemyRegister(AASFCharacter* _EnemyTracking, FGameplayTag TrackingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyOnTrackNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyOnTrackForTagNum(FGameplayTag TrackTag) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddTrackingEnemy(AASFCharacter* _EnemyTracking, AASFCharacter* _Target, FGameplayTag TrackingType, bool _Force);
    
};

