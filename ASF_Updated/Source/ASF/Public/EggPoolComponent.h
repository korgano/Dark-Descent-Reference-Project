#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EggPoolComponent.generated.h"

class AASFCharacter;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UEggPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AASFCharacter*> Eggs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> OpeningEffectClass;
    
    UEggPoolComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveEgg(AASFCharacter* EggToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyEggs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AASFCharacter*> GetAllEggs() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EggsHaveToOpen();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddEgg(AASFCharacter* NewEgg);
    
};

