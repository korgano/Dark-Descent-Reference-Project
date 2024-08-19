#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Event_DirectiveDelegate.h"
#include "Directive.generated.h"

class AActor;
class ASquad;
class UDirective_DataAsset;
class UTexture2D;

UCLASS(Blueprintable)
class ASF_API UDirective : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* Squad;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Directive OnDirectiveExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDirective_DataAsset* Directive_DataAsset;
    
    UDirective();

    UFUNCTION(BlueprintCallable)
    void PlayDirectiveAcknows(AActor* _TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDirectiveAvailable(AActor* _TargetActor, FGameplayTagContainer& ErrorReasons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDirectiveName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetDirectiveIcon(bool _bIsSquadDirective, bool Selected) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteDirective(AActor* _TargetActor, bool _WithAcknow);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeResourceNeeded();
    
    UFUNCTION(BlueprintCallable)
    bool CanSpendAllRessourcesNeeded();
    
};

