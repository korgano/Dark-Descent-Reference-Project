#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EnumISTWIN.h"
#include "Event_GameplayTwinActorDelegate.h"
#include "Event_GameplayTwinActor_ActorDelegate.h"
#include "GameplayTwinActor.generated.h"

class UGameplayTwinComponent;

UCLASS(Blueprintable)
class ASF_API AGameplayTwinActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LinkedObjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LinkedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString debug_AllCompNames;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameplayTwinActor OnTwinLink;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameplayTwinActor_Actor OnAboutToUnLinkTwin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameplayTwinActor OnTwinUnLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TagToAddToLinkedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TagToRemoveFromLinkedObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LinkedObjectSubLevel;
    
public:
    AGameplayTwinActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnLinkTwin(UGameplayTwinComponent* TwinComp);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedLevelActors();
    
    UFUNCTION(BlueprintCallable)
    void SetLinkedObjectSubLevel(const FString& _SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkedObjectName(const FString& _LinkedObjectName);
    
    UFUNCTION(BlueprintCallable)
    void LinkTwin(UGameplayTwinComponent* TwinComp);
    
    UFUNCTION(BlueprintCallable)
    bool HasTagFromLinkedObject(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLinkedObjectSubLevel() const;
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetCurrentActor_BP(AActor* ActorToCheck, EnumISTWIN& IsTwin);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetCurrentActor(AActor* ActorToCheck, bool& bIsTwin);
    
    UFUNCTION(BlueprintCallable)
    void AddTagToRemoveFromLinkedObject(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddTagToAddToLinkedObject(FGameplayTag _Tag);
    
};

