#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EnumActionStatus.h"
#include "EnumFOWVisionType.h"
#include "Event_DeployableSkill_DeployableDelegate.h"
#include "Skill.h"
#include "Skill_Params.h"
#include "Templates/SubclassOf.h"
#include "Skill_Deployable.generated.h"

class AActor;
class APlacementRestrictionArea;
class ASkillRestrictedLaunchZone;
class UInteractiveComponent;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class ASF_API USkill_Deployable : public USkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DeployableSkill_Deployable OnDeployableCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DeployableSkill_Deployable OnDeployableDeployed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float radiusValidation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkillRestrictedLaunchZone*> SkillRestrictedLaunchZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlacementRestrictionArea*> MonitoredRestrictionAreas;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EnumFOWVisionType> Deployable_VisibilityLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavFilterClass;
    
    USkill_Deployable();

    UFUNCTION(BlueprintCallable)
    bool SpawnPointIsValid(FVector Location, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnDeployable(FSkill_Params _SkillParams);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSkillRestrictedLaunchZone(ASkillRestrictedLaunchZone* SkillRestrictedLaunchZone);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlacementRestrictionArea(APlacementRestrictionArea* RestrictionArea);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionDeployableStart(UInteractiveComponent* InteractiveComponent, EnumActionStatus InteractionStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionDeployableEnd(UInteractiveComponent* InteractiveComponent, EnumActionStatus InteractionStatus);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCreation(AActor* _Actor);
    
    UFUNCTION(BlueprintCallable)
    bool IsRotationAllowedByRestrictionAreas(FVector _Location, FRotator _Rotator);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleRestrictionAreaRemoved(APlacementRestrictionArea* RemovedArea);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleNewRestrictionArea(APlacementRestrictionArea* NewArea);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASkillRestrictedLaunchZone*> GetSkillRestrictedLaunchZones() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlacementRestrictionArea*> GetMonitoredRestrictionAreas() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSkillRestrictedLaunchZones();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlacementRestrictionAreas();
    
    UFUNCTION(BlueprintCallable)
    void AddSkillRestrictedLaunchZone(ASkillRestrictedLaunchZone* NewSkillRestrictedLaunchZone);
    
    UFUNCTION(BlueprintCallable)
    void AddPlacementRestrictionArea(APlacementRestrictionArea* NewRestrictionArea);
    
};

