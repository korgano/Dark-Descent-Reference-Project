#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TriggerInfo.generated.h"

class AGameplayEvent;
class UTriggerInfo;

UCLASS(Blueprintable)
class ASF_API UTriggerInfo : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TriggerLabel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThisTriggerShouldBeFalse;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyTriggerWhenTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayEvent* ParentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTriggerActive;
    
    UTriggerInfo();

    UFUNCTION(BlueprintCallable)
    void SetTriggerLabel(const FString& NewLabel);
    
    UFUNCTION(BlueprintCallable)
    bool IsRelevant(UTriggerInfo* OtherTriggerInfo, bool& NewTriggerActivation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitTriggerInfoEarly(AGameplayEvent* _GameplayEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitTriggerInfo(AGameplayEvent* _GameplayEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTriggerLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckValidityTrigger() const;
    
};

