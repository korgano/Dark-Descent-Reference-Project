#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "CharacterIDName.h"
#include "EGender.h"
#include "MarineCustomization.h"
#include "CivilianSpawner.generated.h"

class AHumanoidTactical;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API ACivilianSpawner : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasSpawnCivil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHumanoidTactical> HumanoidToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* AssociatedHumanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnAtBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTinda_Effect>> EffectsToAddToHumanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender CivilianGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarineCustomization Customization;
    
public:
    ACivilianSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AHumanoidTactical* SpawnHumanoid(FTransform _Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAssociatedHumanoidID(FCharacterIDName _CharacterIDName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnHumanoid();
    
    UFUNCTION(BlueprintCallable)
    void OnCivilianListChanged(AHumanoidTactical* _Humanoid, bool _Added);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetSpawnTransform();
    
};

