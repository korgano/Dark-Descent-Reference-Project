#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "TriggerInfo.h"
#include "POIPerceptionTriggerInfo.generated.h"

class AActor;
class AGameplayTwinActor;
class AMission;
class UAIPointOfInterestComponent;
class UPointOfInterestConfig_DataAsset;

UCLASS(Blueprintable)
class ASF_API UPOIPerceptionTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference ActorToPerceive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAIPointOfInterestComponent> PerceptionComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestConfig_DataAsset* PerceptionConfig_DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestComponent* POIComponent;
    
public:
    UPOIPerceptionTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTwinLinked(AGameplayTwinActor* _TwinActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerPerceived(AMission* Mission, AActor* PerceiveGATrigger);
    
    UFUNCTION(BlueprintCallable)
    void EnablePOI(AActor* _Actor);
    
};

