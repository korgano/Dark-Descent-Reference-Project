#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "CharacterIDName.h"
#include "Event_Cocoon_HumanoidDelegate.h"
#include "Cocoon.generated.h"

class AASFCharacter;
class AASFGameModeBase_TacticalMode;
class AHumanoid;
class ASubLevelHandler;
class UCommonSaveLoadComponent;
class UInteractiveComponent;
class UStaticMeshComponent;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API ACocoon : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* HostedHumanoidPendingReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHumanoid> DefaultHostedHumanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> InCocoonEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> CocoonHostedEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> CocoonReleasingEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> PostCocoonEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasBeenOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasSpawnedDefaultHumanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* HostedHumanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractiveComponent* HostedHumanoidOpenCocoonComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* CocoonEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* CocoonReleasingEffect;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInteractiveComponent> OpenCocoonInteractionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableHostedHumanoidPhysic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HostedHumanoidOffset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Cocoon_Humanoid OnHumanoidHosted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Cocoon_Humanoid OnHumanoidReleased;
    
    ACocoon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnHostHumanoid();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseHostedHumanoid();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHostHumanoidMeshLoaded(AASFCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDefaultHumanoidSpawning(AASFGameModeBase_TacticalMode* GameMode, AHumanoid* Humanoid);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostingHumanoid() const;
    
    UFUNCTION(BlueprintCallable)
    void HostHumanoid(AHumanoid* Humanoid);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleNewHost(AHumanoid* NewHost);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHostReleasing(AHumanoid* ReleasedHost);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHostReleased(AHumanoid* ReleasedHost);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAlreadyOpened();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInteractiveComponent* GetHostedHumanoidOpenCocoonComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoid* GetHostedHumanoid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CutNextCreepWeb();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHostHumanoid(AHumanoid* Humanoid) const;
    
    UFUNCTION(BlueprintCallable)
    void AnimationReleaseFinished(AHumanoid* Humanoid);
    
};

