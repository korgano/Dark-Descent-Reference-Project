#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Diplomacy.h"
#include "EDiplomacy.h"
#include "DiplomacyComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UDiplomacyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiplomacy> Diplomacies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TeamTag;
    
public:
    UDiplomacyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDiplomacyWihTeam(FGameplayTag _TeamTag, EDiplomacy _NewDiplo);
    
    UFUNCTION(BlueprintCallable)
    void InitDiplomacy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTeamTag();
    
    UFUNCTION(BlueprintCallable)
    EDiplomacy GetDiplomacyWithTeamTag(FGameplayTag _TeamTag);
    
    UFUNCTION(BlueprintCallable)
    EDiplomacy GetDiplomacyWithActor(AActor* _OtherActor);
    
    UFUNCTION(BlueprintCallable)
    static EDiplomacy GetDiplomacyBetweenActor(AActor* _From, AActor* Against);
    
};

