#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "FeedbackActorInterface.h"
#include "Lift.generated.h"

class AASFCharacter;
class USubLevelConnectorComponent;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API ALift : public AActorWithGameplayTag, public IFeedbackActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSquadMustReachArrowsLocations;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> DisableOtherLiftEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NoVisibilityForSubLevel;
    
    ALift(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLiftVisibility(const FString& Level);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextTransofrmLiftForSave(const FTransform& NextTrans);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableOtherLifts(bool newEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSquadMustReachArrowsLocations() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AASFCharacter*> FilterAlliesAvailable(TArray<AASFCharacter*> Allies);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ComputeConnectorName(const FString& ConnectorName, USubLevelConnectorComponent* SubLevelConnectorComponent);
    

    // Fix for true pure virtual functions not being implemented
};

