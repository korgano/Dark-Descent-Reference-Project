#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ActorWithGameplayTag.h"
#include "BoxTransform.h"
#include "CustomCenterLocationInterface.h"
#include "DoorNavAreaQuery.h"
#include "EnumAIActionStatus.h"
#include "Event_DoorBreachDelegate.h"
#include "Event_WeldPointChangeDelegate.h"
#include "MatScalarParameter.h"
#include "OpenDataWidget.h"
#include "Door.generated.h"

class AASFCharacter;
class ATerminal;
class UAIAction;
class UAnimMontage;
class UAnimationAsset;
class UBoxComponent;
class UDecalComponent;
class UDoorPrimaryDataAsset;
class UMapFeedbackDataProperties;
class UMaterialInterface;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ADoor : public AActorWithGameplayTag, public IOpenDataWidget, public ICustomCenterLocationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* Breacher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer blockingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDoorPrimaryDataAsset* DoorDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> Decals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDoorNavAreaQuery> DoorNavAreaQueryPriorityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatScalarParameter> MaterialScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFacingRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAngleDoor;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_DoorBreach OnDoorBreached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GraphID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedbackDataProperties> OpenDataProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATerminal*> LinkedTerminals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 WeldPointCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeldPointMax;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> WeldedDoorEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> PartiallyWeldedDoorEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_WeldPointChange WeldPointChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> DoorTerminalMeshClass;
    
    ADoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDoorDecal(FTransform Transform, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetWeldPointCurrent(int32 _WeldPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetTerminalMesh(const TSoftObjectPtr<UStaticMesh>& _Mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPathFindingBox(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFOWLimits2(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFOWLimits1(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFOW_DoorFraming2(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFOW_DoorFraming1(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDoorMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDoorMesh(USkeletalMesh* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDoorFramingMesh(UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorAnim(UAnimationAsset* Anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollider_LiftDoorAdditionalFraming2(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollider_LiftDoorAdditionalFraming1(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollider_DoorFraming2(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollider_DoorFraming1(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetBreacher(AASFCharacter* _Breacher);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBoxInteraction(FBoxTransform BoxTransform);
    
    UFUNCTION(BlueprintCallable)
    void Rotate90Degree();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveSideBreacher(UObject* _SideBreacher);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBreacherActionEnded(UAIAction* _Action, EnumAIActionStatus _AIActionStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorOpenedOrOpening() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorClosedOrClosing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitDoorWithPDA();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWeldPointMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeldPointCurrent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetSkeletalMeshComp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FVector> GetRushLocations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UMapFeedbackDataProperties> GetOpenDataProperties_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ATerminal*> GetLinkedTerminals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetIsTranslusent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FVector> GetInteractionLocations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGraphID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UBoxComponent*> GetFOWLimits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDoorThickness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCustomCenterLocation_Implementation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceUnweld();
    
    UFUNCTION(BlueprintCallable)
    void CreateAnimInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddSideBreacher(UObject* _SideBreacher);
    
    UFUNCTION(BlueprintCallable)
    void AddLinkedTerminal(ATerminal* _Terminal);
    

    // Fix for true pure virtual functions not being implemented
};

