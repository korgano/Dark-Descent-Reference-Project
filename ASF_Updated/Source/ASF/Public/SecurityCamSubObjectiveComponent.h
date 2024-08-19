#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "SubObjectiveComponent.h"
#include "SecurityCamSubObjectiveComponent.generated.h"

class ASecurityCamera;
class ASubLevelHandler;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USecurityCamSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference SecurityCamera;
    
public:
    USecurityCamSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSubLevelIsLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraActivation(ASecurityCamera* _SecurityCamera);
    
};

