#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "DamageResultStruct.h"
#include "GameplayTwinReference.h"
#include "SubObjectiveComponent.h"
#include "SecureCivilSubObjectiveComponent.generated.h"

class AASFCharacter;
class AASFGameState_TacticalMode;
class AHumanoidTactical;
class AMission;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USecureCivilSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> CivilToSecure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NbCivilSecured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NbCivilDead;
    
    USecureCivilSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSecureCivil(AHumanoidTactical* _Humanoid, bool B);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionRegistered(AASFGameState_TacticalMode* GameState, AMission* Mission);
    
    UFUNCTION(BlueprintCallable)
    void OnCivilDie(AASFCharacter* ActorKilled, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCivilAdded(AHumanoidTactical* _Humanoid, bool B);
    
};

