#pragma once
#include "CoreMinimal.h"
#include "Tinda_Effect.h"
#include "TMEvent_Effect.generated.h"

class ATMEventSystem;

UCLASS(Blueprintable)
class ASF_API UTMEvent_Effect : public UTinda_Effect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintOnGUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATMEventSystem* EventSystem;
    
public:
    UTMEvent_Effect();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPrintOnEventGUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldPrintDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayInformations(const FText& _Title, const FText& _Description);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetPrintedRemainingDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetDescription() const;
    
};

