#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ASFCharacter.h"
#include "OpenDataWidget.h"
#include "Sentry.generated.h"

class UCharacterDataAsset;
class UCombatComponent;
class UMapFeedbackDataProperties;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ASentry : public AASFCharacter, public IOpenDataWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DeployPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool displayInFollowers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedbackDataProperties> OpenDataProperties;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 KillCount;
    
public:
    ASentry(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDeployStateChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementKillCount();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UMapFeedbackDataProperties> GetOpenDataProperties_Implementation() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetKillCount();
    

    // Fix for true pure virtual functions not being implemented
};

