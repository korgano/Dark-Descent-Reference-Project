#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "RoomShelter.generated.h"

class ASubLevelHandler;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ARoomShelter : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ShelterRooms;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> ShelterRoomsGID;
    
public:
    ARoomShelter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnMissionLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintPure)
    TArray<int64> GetShelterRooms() const;
    
    UFUNCTION(BlueprintCallable)
    void AddShelterableRoomAt(const FVector& _RoomPosition);
    
};

