#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "TMEvent.generated.h"

class ATMEventSystem;
class UEvent_DataAsset;
class UTMEvent_Effect;
class UTinda_Effect;

UCLASS(Abstract, Blueprintable)
class ASF_API UTMEvent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTMEvent_Effect>> EffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATMEventSystem* EventSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEvent_DataAsset* DataAsset;
    
public:
    UTMEvent();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Trigger();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreateEffectToApply(UTinda_Effect* _Effect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATMEventSystem* GetParentSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<UTMEvent_Effect>> GetEffectsToApply() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEvent_DataAsset* GetDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeTriggered(ATMEventSystem* _EventSystem);
    
};

