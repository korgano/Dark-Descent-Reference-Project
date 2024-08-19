#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "Templates/SubclassOf.h"
#include "Hideout.generated.h"

class AASFCharacter;
class AActor;
class UArrowComponent;
class UBreakdownEffect;
class UCommonSaveLoadComponent;
class UFOWActorVisibilityComponent;
class UNavModifierComponent;
class USceneComponent;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AHideout : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOWActorVisibilityComponent* FOWActorVisibilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* CommonSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SaveMarinesLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* GetInsideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* HiddenCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTinda_Effect*> EffectAppliedOnHiddenCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarinesOutLocation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTinda_Effect>> EffectToApplyOnHiddenMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBreakdownEffect> BreakdownEffectState;
    
    AHideout(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLock(bool _bLock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reserve();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenDoor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateVisibility(AActor* _Owner, bool _Visibilityk);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOccupied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideInside(AASFCharacter* ActorToHide);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseDoor(bool _bLock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelReserve();
    
};

