#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Event_ASkillRestrictedLaunchZone_SkillDelegate.h"
#include "Templates/SubclassOf.h"
#include "SkillRestrictedLaunchZone.generated.h"

class AASFPlayerController;
class USkill;

UCLASS(Blueprintable)
class ASF_API ASkillRestrictedLaunchZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkill> SkillClassToListen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASkillRestrictedLaunchZone_Skill OnSkillLaunchedOnRestrictedZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASkillRestrictedLaunchZone_Skill OnSkillDeployedOnRestrictedZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASkillRestrictedLaunchZone_Skill OnSkillStartDeployingOnRestrictedZone;
    
    ASkillRestrictedLaunchZone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSkillValidated(AASFPlayerController* Controller, const USkill* SkillValidated);
    
    UFUNCTION(BlueprintCallable)
    void OnSkillStartDeploying(AASFPlayerController* Controller, const USkill* SkillValidated);
    
    UFUNCTION(BlueprintCallable)
    void OnSkillDeployed(AASFPlayerController* Controller, const USkill* SkillValidated);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRotationInArea(const FVector& Location, const FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsLocationInArea(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeActivateSkillRestrictedLaunchZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateSkillRestrictedLaunchZone(TSubclassOf<USkill> SkillClass);
    
};

