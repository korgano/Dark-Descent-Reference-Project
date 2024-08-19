#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CosmeticCorpseHandlerComponent.generated.h"

class AActor;
class ACosmeticCorpseActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCosmeticCorpseHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACosmeticCorpseActor*> RegistredCorpse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbMaxCosmeticCorpse;
    
    UCosmeticCorpseHandlerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterCosmeticCorpse(ACosmeticCorpseActor* NewCorpse);
    
    UFUNCTION(BlueprintCallable)
    void OnCorpseDestroyed(AActor* Corpse);
    
};

