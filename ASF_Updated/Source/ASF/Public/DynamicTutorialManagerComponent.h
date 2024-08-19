#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DynamicTutorialManagerEventDelegate.h"
#include "DynamicTutorial_EventDelegate.h"
#include "Templates/SubclassOf.h"
#include "DynamicTutorialManagerComponent.generated.h"

class UDataTable;
class UDynamicTutorial;
class UDynamicTutorialManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UDynamicTutorialManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicTutorialManagerEvent OnTutorialManagerInit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicTutorial_Event OnTutorialTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicTutorial_Event OnTutorialCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicTutorial_Event OnTutorialRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicTutorial*> Triggered_Tutorials;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UDynamicTutorialManagerComponent* DynamicTutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DynamicTutorialsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicTutorial*> DynamicTutorials;
    
public:
    UDynamicTutorialManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TutorialTriggered(UDynamicTutorial* _Tutorial);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTutorial(UDynamicTutorial* _Tutorial);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTutorials();
    
    UFUNCTION(BlueprintCallable)
    void OnUserSettingChanged(FGameplayTag _SettingTag, bool _Value);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialLockChanged(FGameplayTag _SettingTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDynamicTutorialClassIsInstancied(TSubclassOf<UDynamicTutorial> _DTutorialClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetUnreadDynamicTutorialTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FGameplayTag GetNextDynamicTutorialTagToRead(bool& TagIsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDynamicTutorial* GetDynamicTutorialWithTag(const FGameplayTag& _DTutorialTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDynamicTutorial* GetDynamicTutorialWithCodexEntryTag(const FGameplayTag& _DTutorialEntryTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDynamicTutorialsDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDynamicTutorial* GetDynamicTutorialClassOfClass(TSubclassOf<UDynamicTutorial> _DTutorialClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UDynamicTutorial>> GetDynamicTutorialClasses() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateDynamicTutorial(TSubclassOf<UDynamicTutorial> _DTutorialClass);
    
    UFUNCTION(BlueprintCallable)
    void CreateAllNeededTutorials();
    
};

