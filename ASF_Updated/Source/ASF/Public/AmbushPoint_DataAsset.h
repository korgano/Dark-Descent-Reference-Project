#pragma once
#include "CoreMinimal.h"
#include "SpawnPoint_Esthetic_DataAsset.h"
#include "AmbushPoint_DataAsset.generated.h"

class AActor;
class ULevelSequence;
class UNiagaraSystem;

UCLASS(Blueprintable)
class ASF_API UAmbushPoint_DataAsset : public USpawnPoint_Esthetic_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> StaticActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> MovableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> MovableActorParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Sequencer;
    
    UAmbushPoint_DataAsset();

};

