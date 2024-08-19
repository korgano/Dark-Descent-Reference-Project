#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "BodySetupEnums.h"
#include "EnumAlienDeathType.h"
#include "EnumCharacterRagdollType.h"
#include "Event_DismemberDelegate.h"
#include "Event_RagdollFinishedDelegate.h"
#include "PhysicalReactionComponent.generated.h"

class AASFCharacter;
class AActor;
class ACharacter;
class UCurveFloat;
class UPhysicsAsset;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UPhysicalReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FName> BonesFromBodyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> BodyPartsDismemberable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesFixedInRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollAnimationInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollAnimationInfluenceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateRagdollConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterRagdollType CurrentRagdollType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_RagdollFinished OnRagdollFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Dismember OnDismember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesDismembered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentBoneInPhysicsBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fPhysicsBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fTimeBlendPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivatePhysicsReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* CharacterCarried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeadOutOfCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeathByExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DEBUG_NO_TICK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickPhysicBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickDragging;
    
    UPhysicalReactionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnRagdoll(bool GetUp);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleRagdoll(bool Ragdoll);
    
public:
    UFUNCTION(BlueprintCallable)
    void TickRagdollBlend(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickPhysicBlend(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchDragging(bool IsDragging, AASFCharacter* Carried, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnNewActorCopse();
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsBlendWeight(USkeletalMeshComponent* SkMesh, float PhysicsBlendRatio);
    
    UFUNCTION(BlueprintCallable)
    static void SetMeshBonePhysicsType(USkeletalMeshComponent* Mesh, const FName& InBoneName, const FName& BoneNameRoot, TEnumAsByte<EPhysicsType> PhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneSimulatePhysics(const FName& InBoneName, bool NewSimulate);
    
    UFUNCTION(BlueprintCallable)
    void SetBonePhysicsType(const FName& InBoneName, TEnumAsByte<EPhysicsType> PhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPhysicsType(TEnumAsByte<EPhysicsType> PhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllParentsPhysicsType(const FName& InBoneName, TEnumAsByte<EPhysicsType> PhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBodiesBelowPhysicsType(const FName& InBoneName, TEnumAsByte<EPhysicsType> PhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SafeSavePoseSnapshot(FName SnapshotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RagdollCanDriveMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProjectRagdoll(ACharacter* _Character, FVector _Directon, float _Distance, float _Speed, UCurveFloat* _HeightCurve, float _DriftMultiplier, float _JumpAngle, UCurveFloat* _SpeedCurve, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ProcessHit(USkeletalMeshComponent* Mesh, FVector Impulse, FName InBoneName, bool IsADismemberHit, bool IsAKillingHit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerMeshLoaded(AASFCharacter* _ASFCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAnimationDeathIsFinish(EnumAlienDeathType DeathType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MakePhysicalImpulse(USkeletalMeshComponent* Mesh, FVector Impulse, FVector HitLocation, FName InBoneName, bool ForceHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LevelExist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchRagdoll(EnumCharacterRagdollType Type, bool KeepAttached, bool RagdollWithRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPhysicalHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHit() const;
    
    UFUNCTION(BlueprintCallable)
    void InitPhysicalHitReaction();
    
    UFUNCTION(BlueprintCallable)
    void HideBrokenBodyparts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRandomBoneFromBodyPart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBoneFromBodyPart(const FGameplayTag _BodyPartTag) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceImpulse(FVector Impulse, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void ExtremeViolence(USkeletalMeshComponent* Mesh, FVector Impulse, FVector HitLocation, FName InBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableWalking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetachFromCharacter();
    
    UFUNCTION(BlueprintCallable)
    void CutLowerBody(const FName& InBoneName, UPhysicsAsset* InPhysicsAsset);
    
    UFUNCTION(BlueprintCallable)
    void CutHead(FVector Impulse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool BoneIsRoot(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BoneFromBodyPartExist(const FGameplayTag _BodyPartTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BodyPartCanBeDismember(const FGameplayTag _BodyPartTag) const;
    
    UFUNCTION(BlueprintCallable)
    void BishopSlice(FVector Impulse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachToCharacter(AASFCharacter* Character, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachMeshToCapsule();
    
};

