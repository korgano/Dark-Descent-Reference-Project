#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Event_GameplayTwinHandler_GameplayTwinActorDelegate.h"
#include "GameplayTwinHandler.generated.h"

class AGameplayTwinActor;
class AGameplayTwinHandler;
class UActorComponent;

UCLASS(Blueprintable)
class ASF_API AGameplayTwinHandler : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGameplayTwinActor*> GameplayTwinActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AGameplayTwinActor*> GameplayTwinActorsMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameplayTwinHandler_GameplayTwinActor OnTwinActorCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameplayTwinHandler_GameplayTwinActor OnTwinActorDeleted;
    
    AGameplayTwinHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTwinActor(AGameplayTwinActor* ActorToRemove, bool bNeedDelete);
    
    UFUNCTION(BlueprintCallable)
    static void MergeTwinHandlers(AGameplayTwinHandler* HandlerTarget, const TArray<AGameplayTwinHandler*>& HandlersToMerge);
    
    UFUNCTION(BlueprintCallable)
    AGameplayTwinActor* GetTwinOf(AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable)
    AGameplayTwinActor* GetGameplayTwinActorWithNameEditor(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    AGameplayTwinActor* GetGameplayTwinActorWithName(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    UActorComponent* GetAssociatedComponent(AActor* ActorTarget, UActorComponent* ComponentFrom);
    
    UFUNCTION(BlueprintCallable)
    TArray<AGameplayTwinActor*> GetAllTwinsOf(AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorLinkToGameplayTwinActorWithName(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void GameplayTwinActorIsDestroyed(AGameplayTwinActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    int32 DestroyLonelyGameplayTwin();
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTwinActor(AGameplayTwinActor* ActorToAdd);
    
};

