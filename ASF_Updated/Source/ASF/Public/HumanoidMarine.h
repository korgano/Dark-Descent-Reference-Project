#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_Marine_CorpseDelegate.h"
#include "HumanoidTactical.h"
#include "HumanoidMarine.generated.h"

class UEnemyAcknows_DataAsset;
class UMarinesAIActionComponent;
class UPOIPerception_DataAsset;
class USpotLightComponent;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AHumanoidMarine : public AHumanoidTactical {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SquadID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPOIPerception_DataAsset* DefaultPoiPerception_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* ShoulderSpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DisablingTags;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Marine_Corpse OnCorpseSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCreateMarineCard;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableInteractionCapsuleOnDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyAcknows_DataAsset* EnemyAcknowsDataAsset;
    
public:
    AHumanoidMarine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleLight(bool _Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCreateMarineCard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveOverwatchInfluence();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisablingTagsChange(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpotLightComponent* GetShoulderSpotLight() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetPositionInSquad();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMarinesAIActionComponent* GetAI_ActionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddOverwatchInfluence();
    
};

