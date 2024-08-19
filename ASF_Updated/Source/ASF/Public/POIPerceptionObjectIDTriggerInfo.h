#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "TriggerInfo.h"
#include "POIPerceptionObjectIDTriggerInfo.generated.h"

class AASFCharacter;
class AASFGameStateBase;
class AActor;
class AMission;
class UAIPointOfInterestComponent;
class UPointOfInterestConfig_DataAsset;

UCLASS(Blueprintable)
class ASF_API UPOIPerceptionObjectIDTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAIPointOfInterestComponent> PerceptionComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestConfig_DataAsset* PerceptionConfig_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestComponent* POIComponent;
    
public:
    UPOIPerceptionObjectIDTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerPerceived(AMission* Mission, AActor* PerceiveGATrigger);
    
    UFUNCTION(BlueprintCallable)
    void EnablePOI(AActor* _Actor);
    
    UFUNCTION(BlueprintCallable)
    void BindEventToCharacter(AASFGameStateBase* _GameState, AASFCharacter* _Character);
    
};

