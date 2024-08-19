#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterIDName.h"
#include "Event_CivilSpawnwerComp_CharacterIDNameDelegate.h"
#include "TwinActorBootable.h"
#include "CivilSpawner_ActorComponent.generated.h"

class UCivilSpawner_ActorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCivilSpawner_ActorComponent : public UActorComponent, public ITwinActorBootable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_CivilSpawnwerComp_CharacterIDName OnUpdateAssociatedHumanoidID;
    
    UCivilSpawner_ActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAssociatedHumanoidID(const FCharacterIDName& _CharacterIDName);
    
    UFUNCTION(BlueprintCallable)
    void OnAssociatedHumanoidIDUpdated(UCivilSpawner_ActorComponent* comp, FCharacterIDName _CharacterIDName);
    

    // Fix for true pure virtual functions not being implemented
};

